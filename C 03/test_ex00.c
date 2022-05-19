/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:23:53 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/24 10:35:31 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char	*s1;
	char	*s2;

	s1 = "aaaaaaaad";
	s2 = "a";
	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	printf("strcmp : %d", strcmp(s1, s2));
}
