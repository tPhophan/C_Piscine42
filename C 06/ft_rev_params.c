#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//int	main(int ac, char *av[])
int	main(void)
{
	int ac = 4;
	char *av[] = {"Err", "test1", "test2"};
	int	i1;
	int	i2;

	i1 = ac;
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
