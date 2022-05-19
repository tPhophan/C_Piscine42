#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power < 1)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

int		ft_res_size(int nbr, int len_base, int signs)
{
	int i;

	i = 0;
	if (signs == -1)
		i++;
	while (nbr > 0)
	{
		nbr = nbr / len_base;
		i++;
	}
	return (i);
}

int check_base(char *base)
{
	int i1;
	int i2;

	i1 = 0;
	while (base[i1] != '\0')
	{
		i2 = i1 + 1;
		while (base[i2] != '\0')
		{
			if (base[i1] == base[i2] || base[i2] <= 32 || base[i2] == '+' || base[i2] == '-')
				return (0);
			i2++;
		}
		i1++;
	}
	return (1);
}

char    *ft_atoi(char *nbr, char *base_from, int *signs, int *size)
{
	int sz;
	int i_base;
	int valid;

	while (*nbr <= 32)
		nbr++;
	*signs = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			*signs *= -1;
		nbr++;
	}
	sz = 0;
	while (*nbr)
	{
		valid = 0;
        i_base = 0;
		while (base_from[i_base])
        {
            if (*nbr == base_from[i_base])
				valid = 1;
            i_base++;
        }
		if (valid == 0)
				break ;
		nbr++;
		sz++;
	}
	*size = sz;
	return (nbr - sz);
}