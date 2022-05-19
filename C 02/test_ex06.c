/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:00:51 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 10:37:40 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*mystr;

	mystr = "149•";
	printf("%d", ft_str_is_printable(mystr));
	mystr = "!@#&@$#$_)(*%_)()%+-";
	printf("%d", ft_str_is_printable(mystr));
	mystr = "SDasidip";
	printf("%d", ft_str_is_printable(mystr));
	mystr = "";
	printf("%d", ft_str_is_printable(mystr));
}
