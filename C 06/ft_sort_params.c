#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_av(int ac, char *av[])
{
	char	*this_av;
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			this_av = av[i];
			av[i] = av[i + 1];
			av[i + 1] = this_av;
			i = 1;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i1;
	int		i2;

	ft_sort_av(ac, av);
	i1 = ac - 1;
	while (i1 >= 1)
	{
		i2 = 0;
		while (av[i1][i2] != '\0')
		{
			ft_putchar(av[i1][i2]);
			i2++;
		}
		ft_putchar('\n');
		i1--;
	}
	return (0);
}
