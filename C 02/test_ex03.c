/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:20:25 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 09:26:01 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*mystr;

	mystr = "1232312ed";
	printf("%d", ft_str_is_numeric(mystr));
	mystr = "SASD21212";
	printf("%d", ft_str_is_numeric(mystr));
	mystr = "";
	printf("%d", ft_str_is_numeric(mystr));
	mystr = "1231231235657890";
	printf("%d", ft_str_is_numeric(mystr));
}
