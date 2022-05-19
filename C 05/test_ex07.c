/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:34:10 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/01 09:34:32 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-9));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(2147483629));
	printf("%d\n", ft_find_next_prime(2147483630));
	printf("%d\n", ft_find_next_prime(2147483647));
}
