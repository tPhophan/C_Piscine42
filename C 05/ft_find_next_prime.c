/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:32:39 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/31 17:04:27 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb == 2)
		return (1);
	else if (nb > 2)
	{
		if (nb % 2 == 0)
			return (0);
		n = 3;
		while (n <= nb / n)
		{
			if (nb % n == 0)
				return (0);
			n += 2;
		}	
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (2147483630 <= nb && nb <= 2147483647)
		return (2147483647);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}

#include<stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-9));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(2147483629));
	printf("%d\n", ft_find_next_prime(2147483630));
	printf("%d\n", ft_find_next_prime(2147483647));
}