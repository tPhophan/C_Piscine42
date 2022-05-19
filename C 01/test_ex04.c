/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_ultimate_div_mod.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:46:21 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/21 13:52:43 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div(a) = %d, mod(b) = %d", a, b);
}
