/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:45:34 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 09:49:40 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	dest[20];
	char	src[20] = {'a', 'b', 'c', 'd'};
	unsigned int	n = 2;
	int	i = 0;

	ft_strncpy(dest, src, n);
	while (dest[i] != '\0')
	{
		if (dest[i + 1] == '\0')
			printf("%c", dest[i]);
		else
			printf("%c, ", dest[i]);
		i++;
	}
}
