#include <stdlib.h>
#include <stdio.h>

int ft_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power < 1)
        return (1);
    else
        return (nb * ft_power(nb, power - 1));
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

char	*ft_chk_signs(char * nbr, int *signs)
{
	while (*nbr <= 32)
		nbr++;
	*signs = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			*signs *= -1;
		nbr++;
	}
	return (nbr);
}

char    *ft_atoi(char *nbr, char *base_from, int *signs, int *size)
{
	int i_base;
	int valid;

	nbr = ft_chk_signs(nbr, signs);
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
		*size += 1;
	}
	return (nbr - *size);
}

int ft_chk_base(char *base)
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
	return (i1);
}

char	*ft_print_result(int nbr, char *base_to, char *res, int signs)
{
	int		i;
	int		size;
	int		len_base;
	
	len_base = ft_chk_base(base_to);
	size = ft_res_size(nbr, len_base, signs);
	if (signs == -1)
		res[0] = '-';
	if (nbr == 0)
	{
		res[0] = base_to[0];
		res[1] = '\0';
	}
	i = 0;
	while (nbr > 0)
	{
		res[(size - i - 1)] = base_to[nbr % len_base];
		nbr /= len_base;
		i++;
	}
	res[size] = '\0';
	return (res);
}

char	*ft_putnbr_base(int nbr, char *base_to, int signs)
{
	char		*res;
	int			size;
	int			len_size;

	len_size = ft_chk_base(base_to);
	size = ft_res_size(nbr, len_size, signs);
	res = (char*)malloc(sizeof(char) * size + 1);
	if (!(res))
		return (NULL);
	if ((signs == -1 && size == 1) || (size == 0 && signs == 1))
	{
		res[0] = base_to[0];
		return (res);
	}
	return (ft_print_result(nbr, base_to, res, signs));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	int	signs;
	int	size_nbr;
	int	i_nbr;
	int	i_base;

	if (ft_chk_base(base_from) == 0 || ft_chk_base(base_to) == 0)
		return (NULL);
	nbr = ft_atoi(nbr, base_from, &signs, &size_nbr);
	i_nbr = 0;
	nb = 0;
	while (i_nbr < size_nbr)
	{
		i_base = 0;
		while (base_from[i_base] != nbr[i_nbr])
			i_base++;
		nb += i_base * ft_power(ft_chk_base(base_from), (size_nbr - i_nbr - 1));
		i_nbr++;
	}
	return (ft_putnbr_base(nb, base_to, signs));
}

int main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*res;

	nbr = "   -+--102345a6789";
	base_from = "0123456789";
	base_to = "01";

	res = ft_convert_base(nbr, base_from, base_to);
    printf("%s", res);
	free(res);
    return (0);
}