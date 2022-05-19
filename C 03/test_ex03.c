/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:45:55 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 11:47:28 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	dest[100] = "Test : ";
	char	src[20] = "Hello Wordl";

	printf("%s", ft_strncat(dest, src, 5));
}
