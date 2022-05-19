/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:47:32 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/29 11:53:19 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
    char    *str;
    char    *base;

	str = "   ---+--+1234ab567";
	base = "0123456789";
	printf("str = %s\n", str);
	printf("base = %s\n", base);
	printf("ft_atoi_base = %d\n", ft_atoi_base(str, base));
	str = "   -+89_55ab5asd71:ddd";
	base = "01234556789";
	printf("str = %s\n", str);
	printf("base = %s\n", base);
	printf("ft_atoi_base = %d", ft_atoi_base(str, base));
}
