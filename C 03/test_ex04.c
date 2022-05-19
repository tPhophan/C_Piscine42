/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:52:24 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 12:05:04 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "W";

	printf("ft_strtsr : %s\n", ft_strstr(str, to_find));
	printf("strtsr : %s", strstr(str, to_find));
}
