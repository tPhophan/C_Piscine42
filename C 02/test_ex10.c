/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:12:13 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/22 11:23:04 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[50];
	char	*src;
	int	size;

	src = "ASksdks sdspodpe espeos";
	size = 13;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}
