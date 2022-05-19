#include <stdlib.h>

int ft_strlen(char *str);
int ft_recursive_power(int nb, int power);
int ft_res_size(int nbr, int len_base, int signs);
int	check_base(char *base);
char    *ft_atoi(char *nbr, char *base_from, int *signs, int *size);

char	*ft_gen_res2(int nbr, char *base_to, char *res, int signs)
{
	int		i;
	int		size;
	int		len_base;
	
	len_base = ft_strlen(base_to);
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

char	*ft_gen_res1(int nbr, char *base_to, int signs)
{
	char		*res;
	int			size;
	int			len_base;

	len_base = ft_strlen(base_to);
	size = ft_res_size(nbr, len_base, signs);
	res = (char*)malloc(sizeof(char) * size + 1); //{1, 2, 3}
	if (!(res))
		return (NULL);
	if ((signs == -1 && size == 1) || (size == 0 && signs == 1))
	{
		res[0] = base_to[0];
		return (res);
	}
	return (ft_gen_res2(nbr, base_to, res, signs));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	int	signs;
	int	size_nbr;
	int	i_nbr;
	int	i_base;
	int	base;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	nbr = ft_atoi(nbr, base_from, &signs, &size_nbr);
	base = ft_strlen(base_from);
	i_nbr = 0;
	nb = 0;
	while (i_nbr < size_nbr)
	{
		i_base = 0;
		while (base_from[i_base] != nbr[i_nbr])
			i_base++;
		nb += i_base * ft_recursive_power(base, (size_nbr - i_nbr - 1));
		i_nbr++;
	}
	return (ft_gen_res1(nb, base_to, signs));
}