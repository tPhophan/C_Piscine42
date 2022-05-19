/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:08:40 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 09:15:05 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*mystr;

	mystr = "HelloWorld2";
	printf("%d", ft_str_is_alpha(mystr));
	mystr = "HelloWorld!";
	printf("%d", ft_str_is_alpha(mystr));
	mystr = "HelloWorld";
	printf("%d", ft_str_is_alpha(mystr));
	mystr = "";
	printf("%d", ft_str_is_alpha(mystr));
}
