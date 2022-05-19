/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:14:03 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/31 10:42:28 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);

int	main(int ac, char *av[])
{
	int	to_int;

	if (ac == 2)
	{
		to_int = atoi(av[1]);
		printf("%d! = %d", to_int, ft_iterative_factorial(to_int));
	}
}
