/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:00:33 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 14:24:53 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(char *str)
{
	int		istr;
	int		signs;
	int		result;

	istr = 0;
	signs = 0;
	result = 0;
	while ((str[istr] > 8 && str[istr] < 14) || (str[istr] == 32))
		istr++;
	while ((str[istr] == '+' || str[istr] == '-'))
	{
		if (str[istr] == '-')
			signs++;
		istr++;
	}
	while ((str[istr] != '\0') && (str[istr] >= 48 && str[istr] <= 57))
	{
		result = result * 10 + (str[istr] - '0');
		istr++;
	}
	if (signs % 2 != 0)
		return (result * -1);
	return (result);
}

int	main(void)
{
	char	*str;
	str = "   ---+--+1234ab567";
	printf("str = %s", str);
	printf("ft_atoi : %d\n", ft_atoi(str));
	str = "   -+89_55ab5asd71:ddd";
	printf("str = %s", str);
	printf("ft_atoi : %d\n", ft_atoi(str));
}
