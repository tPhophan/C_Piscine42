/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:37:54 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/24 10:45:14 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	unsigned int	n;

	s1 = "AAAAAAAAAAAAAs";
	s2 = "As";
	n = 2;
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp : %d", strncmp(s1, s2, n));
}
