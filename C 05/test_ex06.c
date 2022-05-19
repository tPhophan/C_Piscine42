/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:20:30 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/31 11:22:57 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb);

#include<stdio.h>
#include<stdlib.h>

int	main(int ac, char *av[])
{
	int nb;

	nb = atoi(av[1]);
	if (ac == 2)
		printf("%d", ft_is_prime(nb));
}
