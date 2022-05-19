int	g_my_case[24][4];
int	g_icase;

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	gen_this_my_case(int this_case[], int n)
{
	int	i;

	if (n == 1)
	{
		g_my_case[g_icase][0] = this_case[0];
		g_my_case[g_icase][1] = this_case[1];
		g_my_case[g_icase][2] = this_case[2];
		g_my_case[g_icase][3] = this_case[3];
		g_icase++;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			gen_this_my_case (this_case, n - 1);
			if (n % 2 == 1)
				ft_swap(&this_case[0], &this_case[n - 1]);
			else
				ft_swap(&this_case[i], &this_case[n - 1]);
			i++;
		}
	}
}

void	g_my_case_to_my_case(int g_my_case[24][4], int my_case[24][4])
{
	int	irow;
	int	icol;

	irow = 0;
	while (irow < 24)
	{
		icol = 0;
		while (icol < 4)
		{
			my_case[irow][icol] = g_my_case[irow][icol];
			icol++;
		}
		irow++;
	}
}

void	gen_my_case(int my_case[24][4])
{
	int	this_case[4];

	this_case[0] = 1;
	this_case[1] = 2;
	this_case[2] = 3;
	this_case[3] = 4;
	g_icase = 0;
	gen_this_my_case(this_case, 4);
	g_my_case_to_my_case(g_my_case, my_case);
}