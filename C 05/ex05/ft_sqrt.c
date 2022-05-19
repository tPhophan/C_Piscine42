#include<stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb > 2147395600)
		return(0);
	i = 0;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i += 2;
	}
	i = 1;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i += 2;
	}
	return (0);
}

int	main(void)
{
	printf("sqrt of %d is %d\n", -1176, ft_sqrt(-1176));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 47886400, ft_sqrt(47886400));
	printf("sqrt of %d is %d\n", 1713993074, ft_sqrt(1713993074));
	printf("sqrt of %d is %d\n", 1056250000, ft_sqrt(1056250000));
	printf("sqrt of %d is %d\n", 1414514883, ft_sqrt(1414514883));
	printf("sqrt of %d is %d\n", 1396666384, ft_sqrt(1396666384));
	printf("sqrt of %d is %d\n", 1736933708, ft_sqrt(1736933708));
	printf("sqrt of %d is %d\n", 559133316, ft_sqrt(559133316));
	printf("sqrt of %d is %d\n", 1172992674, ft_sqrt(1172992674));
	printf("sqrt of %d is %d\n", 193515921, ft_sqrt(193515921));
	printf("sqrt of %d is %d\n", 493030861, ft_sqrt(493030861));
}