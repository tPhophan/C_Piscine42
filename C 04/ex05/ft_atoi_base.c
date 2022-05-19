int		chk_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j]) //chk duplicate
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if ((base[i] == 32) || (base[i] > 8 && base[i] < 15) || (base[i] == '-') || (base[i] == '+')) //chk invalid
			return (0);
		i++;
	}
	return (i);
}

int		find_index(char str, char *base)
{
	int retour;
	int i;

	retour = 0;
	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		chk_signs(char *str, int *i)
{
	int signs;

	signs = 0;
	while (str[*i] == 32 || (str[*i] > 8 && str[*i] < 15))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signs++;
		*i += 1;
	}
	if (signs % 2 !=0)
		return (-1);
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		signs;
	int		nb;
	int		index;
	int		len;

	nb = 0;
	i = 0;
	len = chk_error(base);
	if (len > 1)
	{
		signs = chk_signs(str, &i);
		index = find_index(str[i], base);
		while (index != -1)
		{
			nb = (nb * len) + index;
			i++;
			index = find_index(str[i], base);
		}
		return (nb *= signs);
	}
	return (0);
}

#include<stdio.h>

int main(void)
{
    char    *str;
    char    *base;

	str = "   ---+--+1234ab567";
	base = "0123456789";
	printf("str = %s\n", str);
	printf("ft_atoi_base = %d\n", ft_atoi_base(str, base));
	str = "   -+89_55ab5asd71:ddd";
	base = "0123456789abcdef";
	printf("str = %s\n", str);
	printf("ft_atoi_base = %d", ft_atoi_base(str, base));
}