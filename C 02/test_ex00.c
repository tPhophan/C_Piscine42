/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:49:37 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/21 17:09:27 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[20];
	char	src[20] = {'a', 'b', 'c', 'd'};
	int	index = 0;

	ft_strcpy(dest, src);
	while (dest[index] != '\0')
	{
		if (dest[index + 1] == '\0')
			printf("%c", dest[index]);
		else
			printf("%c, ", dest[index]);
		index++;
	}
}
