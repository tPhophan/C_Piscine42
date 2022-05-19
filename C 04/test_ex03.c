/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:04:20 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/29 09:29:59 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;

	str = "   ---+--+1234ab567";
	printf("str = %s\n", str);
	printf("ft_atoi : %d\n", ft_atoi(str));
	str = "   -+-89_55ab5asd71:ddd";
	printf("str = %s\n", str);
	printf("ft_atoi : %d", ft_atoi(str));
}
