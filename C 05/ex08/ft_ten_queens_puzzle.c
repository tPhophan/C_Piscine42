#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_test(int tb[10], int x, int y)
{
	int i;

	i = 0;
	while (i < x)
		if (tb[i] == y || i + tb[i] == x + y || i - tb[i] == x - y)
			return (0);
		i++;
	return (1);
}

static void	ft_recur(int tb[10], int *res, int pos)
{
	int i;
	int i2;

	if (pos == 10)
	{
		*res += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(tb[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_test(tb, pos, i) == 1)
			{
				tb[pos] = i;
				ft_recur(tb, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		tb[10];
	int		i;
	int		res;

	i = -1;
	while (++i < 10)
		tb[i] = -1;
	res = 0;
	ft_recur(tb, &res, 0);
	return (res);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}