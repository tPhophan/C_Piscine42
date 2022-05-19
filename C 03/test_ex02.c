/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:34:16 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 11:39:41 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char	dest[100] = "Test : ";
	char	src[20] = "Hello World";

	printf("%s", ft_strcat(dest, src));
}
