/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:09:12 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 13:33:03 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[] = "Hello World!";
	char			src[] = "Jaaaa. ";
	unsigned int	size = 5;

	printf("strlcat : %lu\n", strlcat(dest, src, size));
	printf("ft_strlcat : %u\n", ft_strlcat(dest, src, size));
	printf("dest : %s, len = %lu\n", dest, strlen(dest));
	printf("src : %s, len = %lu", src, strlen(src));
}
