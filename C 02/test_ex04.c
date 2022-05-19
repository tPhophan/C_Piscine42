/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:32:01 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 09:34:54 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*mystr;

	mystr = "AbCd";
	printf("%d", ft_str_is_lowercase(mystr));
	mystr = "ABDSDSDS";
	printf("%d", ft_str_is_lowercase(mystr));
	mystr = "asdasdpowe";
	printf("%d", ft_str_is_lowercase(mystr));
	mystr = "";
	printf("%d", ft_str_is_lowercase(mystr));
}
