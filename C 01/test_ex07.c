/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:15:45 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/21 16:02:50 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		if (i < size - 1)
			printf("%d ,", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
}
