void	ft_rev_irow(int *res, int size);

int	this_case_in_row(int *row);

void	gen_dmmy_col(int dmmy_col[4], int res[4][4], int col_num);

int	chk_l(int *row, int val)
{
	int	highest;
	int	count_visible;
	int	irow;

	count_visible = 1;
	highest = row[0];
	irow = 1;
	while (irow < 4)
	{
		if (row[irow] > highest)
		{
			count_visible++;
			highest = row[irow];
		}
		irow++;
	}
	if (count_visible == val && this_case_in_row(row) == 0)
		return (1);
	else
		return (0);
}

int	chk_r(int *row, int val)
{
	int	return_chk;

	ft_rev_irow(row, 4);
	return_chk = chk_l(row, val);
	ft_rev_irow(row, 4);
	return (return_chk);
}

int	verify_rows(int res[4][4], int *val)
{
	if (chk_l(res[0], val[8]) == 0 || chk_r(res[0], val[12]) == 0)
		return (0);
	if (chk_l(res[1], val[9]) == 0 || chk_r(res[1], val[13]) == 0)
		return (0);
	if (chk_l(res[2], val[10]) == 0 || chk_r(res[2], val[14]) == 0)
		return (0);
	if (chk_l(res[3], val[11]) == 0 || chk_r(res[3], val[15]) == 0)
		return (0);
	return (1);
}

int	verify_cols(int res[4][4], int *val)
{
	int	dmmy_col[4];

	gen_dmmy_col(dmmy_col, res, 0);
	if (chk_l(dmmy_col, val[0]) == 0 || chk_r(dmmy_col, val[4]) == 0)
		return (0);
	gen_dmmy_col(dmmy_col, res, 1);
	if (chk_l(dmmy_col, val[1]) == 0 || chk_r(dmmy_col, val[5]) == 0)
		return (0);
	gen_dmmy_col(dmmy_col, res, 2);
	if (chk_l(dmmy_col, val[2]) == 0 || chk_r(dmmy_col, val[6]) == 0)
		return (0);
	gen_dmmy_col(dmmy_col, res, 3);
	if (chk_l(dmmy_col, val[3]) == 0 || chk_r(dmmy_col, val[7]) == 0)
		return (0);
	return (1);
}

int	my_verify(int res[4][4], int *val)
{
	if (verify_rows(res, val) == 0 || verify_cols(res, val) == 0)
		return (0);
	return (1);
}