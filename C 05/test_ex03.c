/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:31:08 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/31 09:43:57 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int ft_recursive_power(int nb, int power);

int	main(int ac, char *av[])
{
	int	nb;
	int power;

	nb = atoi(av[1]);
	power = atoi(av[2]);
	if (ac == 3)
	{
		printf("ft_recursive_power = %d", ft_recursive_power(nb, power));
	}
}
