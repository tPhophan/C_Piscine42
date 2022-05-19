void	ft_rev_irow(int *res, int size)
{
	int	irow;
	int	this_val;

	irow = 0;
	while (irow < size / 2)
	{
		this_val = res[irow];
		res[irow] = res[size - 1 - irow];
		res[size - 1 - irow] = this_val;
		irow++;
	}
}

int	this_case_in_row(int *row)
{
	int	irow;
	int	icol;

	irow = 0;
	while (irow < 4)
	{
		icol = 0;
		while (icol < 4)
		{
			if (row[irow] == row[icol] && irow != icol)
				return (1);
			icol++;
		}
		irow++;
	}
	return (0);
}

void	gen_dmmy_col(int dmmy_col[4], int res[4][4], int col_num)
{
	dmmy_col[0] = res[0][col_num];
	dmmy_col[1] = res[1][col_num];
	dmmy_col[2] = res[2][col_num];
	dmmy_col[3] = res[3][col_num];
}