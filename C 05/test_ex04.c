/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:53:52 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/31 10:55:40 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int ft_fibonacci(int index);

int main(int ac, char *av[])
{
	int index;

	index = atoi(av[1]);
	if (ac == 2)
	{
		printf("%d", ft_fibonacci(index));
	}
}
