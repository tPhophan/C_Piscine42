/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:36:51 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 09:39:18 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*mystr;

	mystr = "AbCdE";
	printf("%d", ft_str_is_uppercase(mystr));
	mystr = "ASASASASs";
	printf("%d", ft_str_is_uppercase(mystr));
	mystr = "ASDIKOSIOIEKJPPSOD";
	printf("%d", ft_str_is_uppercase(mystr));
	mystr = "";
	printf("%d", ft_str_is_uppercase(mystr));
}
