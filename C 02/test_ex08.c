/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:40:36 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 10:55:39 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char	mystr[] = "a12312@!##*$asdZXC 932";
	ft_strlowcase(mystr);
	printf("%s", mystr);
}
