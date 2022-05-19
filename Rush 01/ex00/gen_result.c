#include <unistd.h>

void	gen_my_case(int my_case[24][4]);

int		my_verify(int res[4][4], int *val);

void	my_case_to_result(int res[4][4], int my_case[24][4], int line_num[4])
{
	int	irow;
	int	icol;

	irow = 0;
	while (irow < 4)
	{
		icol = 0;
		while (icol < 4)
		{
			res[irow][icol] = my_case[line_num[irow]][icol];
			icol++;
		}
		irow++;
	}
}

void	print_result(int res[4][4])
{
	int		irow;
	int		icol;
	char	c;

	irow = 0;
	while (irow < 4)
	{
		icol = 0;
		while (icol < 4)
		{
			c = res[irow][icol] + '0';
			write(1, &c, 1);
			if (icol != 3)
				write(1, " ", 1);
			icol++;
		}
		if (irow != 3)
			write(1, "\n", 1);
		irow++;
	}
}

void	gen_result(int lines[4], int res[4][4], int mycase[24][4], int val[16])
{
	while (lines[0]++, lines[0] < 24)
	{
		lines[1] = 0;
		while (lines[1]++, lines[1] < 24)
		{
			lines[2] = 0;
			while (lines[2]++, lines[2] < 24)
			{
				lines[3] = 0;
				while (lines[3]++, lines[3] < 24)
				{
					my_case_to_result(res, mycase, lines);
					if (my_verify(res, val) == 1)
					{
						print_result(res);
						return ;
					}
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

void	annexe(int val[16])
{
	int	my_case[24][4];
	int	res[4][4];
	int	line_num[4];
	int	iline;

	iline = -1;
	while (iline++, iline < 4)
		line_num[iline] = -1;
	gen_my_case(my_case);
	gen_result(line_num, res, my_case, val);
}