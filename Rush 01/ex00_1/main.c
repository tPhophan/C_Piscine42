#include <unistd.h>
#include <stdio.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	g_case[24][4];
int	g_case_index;

void	gen_case(int this_case[], int n)
{
	int	i;

	if (n == 1)
	{
		g_case[g_case_index][0] = this_case[0];
		g_case[g_case_index][1] = this_case[1];
		g_case[g_case_index][2] = this_case[2];
		g_case[g_case_index][3] = this_case[3];
		g_case_index++;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			gen_case (this_case, n - 1);
			if (n % 2 == 1)
				swap(&this_case[0], &this_case[n - 1]);
			else
				swap(&this_case[i], &this_case[n - 1]);
			i++;
		}
	}
}

void	old_to_my_case(int old_case[24][4], int my_case[24][4])
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 < 24)
	{
		i2 = 0;
		while (i2 < 4)
		{
			my_case[i1][i2] = old_case[i1][i2];
			i2++;
		}
		i1++;
	}
}

void	get_my_case(int my_case[24][4])
{
	int	this_case[4];

	this_case[0] = 1;
	this_case[1] = 2;
	this_case[2] = 3;
	this_case[3] = 4;
	g_case_index = 0;
	gen_case(this_case, 4);
	old_to_my_case(g_case, my_case);
}
void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}

int	el_in_tab(int *row)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			if (row[cur] == row[cur2] && cur != cur2)
				return (1);
			cur2++;
		}
		cur++;
	}
	return (0);
}

void	get_cols(int col_tab[4], int tab[4][4], int col_num)
{
	col_tab[0] = tab[0][col_num];
	col_tab[1] = tab[1][col_num];
	col_tab[2] = tab[2][col_num];
	col_tab[3] = tab[3][col_num];
}

int	check(int *row, int val)
{
	int	stock;
	int	cur;
	int	num;

	cur = 1;
	stock = row[0];
	num = 1;
	while (num < 4)
	{
		if (row[num] > stock)
		{
			cur++;
			stock = row[num];
		}
		num++;
	}
	if (cur == val && el_in_tab(row) == 0)
		return (1);
	else
		return (0);
}

int	check_reverse(int *row, int val)
{
	int	ret;

	ft_rev_int_tab(row, 4);
	ret = check(row, val);
	ft_rev_int_tab(row, 4);
	return (ret);
}

int	verif_rows(int result[4][4], int *val)
{
	if (check(result[0], val[8]) == 0 || check_reverse(result[0], val[12]) == 0)
		return (0);
	if (check(result[1], val[9]) == 0 || check_reverse(result[1], val[13]) == 0)
		return (0);
	if (check(result[2], val[10]) == 0 || check_reverse(result[2], val[14]) == 0)
		return (0);
	if (check(result[3], val[11]) == 0 || check_reverse(result[3], val[15]) == 0)
		return (0);
	return (1);
}

int	verif_cols(int result[4][4], int *val)
{
	int	test_tab[4];

	get_cols(test_tab, result, 0);
	if (check(test_tab, val[0]) == 0 || check_reverse(test_tab, val[4]) == 0)
		return (0);
	get_cols(test_tab, result, 1);
	if (check(test_tab, val[1]) == 0 || check_reverse(test_tab, val[5]) == 0)
		return (0);
	get_cols(test_tab, result, 2);
	if (check(test_tab, val[2]) == 0 || check_reverse(test_tab, val[6]) == 0)
		return (0);
	get_cols(test_tab, result, 3);
	if (check(test_tab, val[3]) == 0 || check_reverse(test_tab, val[7]) == 0)
		return (0);
	return (1);
}

void	my_case_to_result(int result[4][4], int my_case[24][4], int line_num[4])
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 < 4)
	{
		i2 = 0;
		while (i2 < 4)
		{
			result[i1][i2] = my_case[line_num[i1]][i2];
			i2++;
		}
		i1++;
	}
}

int	verif(int result[4][4], int *val)
{
	if (verif_rows(result, val) == 0 || verif_cols(result, val) == 0)
		return (0);
	return (1);
}

void	print_result(int result[4][4])
{
	int		i1;
	int		i2;
	char	c;

	i1 = 0;
	while (i1 < 4)
	{
		i2 = 0;
		while (i2 < 4)
		{
			c = result[i1][i2] + '0';
			write(1, &c, 1);
			if (i2 != 3)
				write(1, " ", 1);
			i2++;
		}
		if (i1 != 3)
			write(1, "\n", 1);
		i1++;
	}
}

void	gen_result(int line_num[4], int result[4][4], int my_case[24][4], int val[16])
{
	while (line_num[0]++, line_num[0] < 24)
	{
		line_num[1] = 0;
		while (line_num[1]++, line_num[1] < 24)
		{
			line_num[2] = 0;
			while (line_num[2]++, line_num[2] < 24)
			{
				line_num[3] = 0;
				while (line_num[3]++, line_num[3] < 24)
				{
					my_case_to_result(result, my_case, line_num);
					if (verif(result, val) == 1)
					{
						print_result(result);
						return ;
					}
				}
			}
		}
	}
	write(1, "Error\n", 6);
}

void	resolve(int val[16])
{
	int	my_case[24][4];
	int	result[4][4];
	int	line_num[4];
	int	i_cur;

	i_cur = -1;
	while (i_cur++, i_cur < 4)
		line_num[i_cur] = -1;
	get_my_case(my_case);
	gen_result(line_num, result, my_case, val);
}

int	process_char(int cur, char **argv, int val[16])
{
	if (cur > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (cur % 2 == 0)
	{
		if (argv[1][cur] >= 48 && argv[1][cur] <= 57)
			val[cur / 2] = argv[1][cur] - 48;
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		if (argv[1][cur] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	val[16];
	int	cur;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	cur = -1;
	while (cur++, argv[1][cur] != 0)
	{
		if (process_char(cur, argv, val) == 1)
			return (1);
	}
	resolve(val);
}*/

int	main(void)
{
	int	argc = 2;
	char	**argv;
	int	val[16];
	int	cur;

	argv[1] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	cur = -1;
	while (cur++, argv[1][cur] != 0)
	{
		if (process_char(cur, argv, val) == 1)
			return (1);
	}
	resolve(val);
}
