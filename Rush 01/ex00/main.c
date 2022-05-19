#include <unistd.h>

void	annexe(int val[16]);

int	gen_crite(int iav, char **argv, int val[16])
{
	if (iav > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (iav % 2 == 0)
	{
		if (argv[1][iav] >= 48 && argv[1][iav] <= 57)
			val[iav / 2] = argv[1][iav] - 48;
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		if (argv[1][iav] != ' ')
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	crite[16];
	int	iav;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	iav = -1;
	while (iav++, av[1][iav] != 0)
	{
		if (gen_crite(iav, av, crite) == 1)
			return (1);
	}
	annexe(crite);
}
