/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:40:23 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 13:42:47 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Hello World!";

	printf("strlen : %lu\n", strlen(str));
	printf("ft_strlen : %d", ft_strlen(str));
}
