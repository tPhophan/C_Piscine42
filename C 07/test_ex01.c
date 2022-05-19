/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:41:52 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/05 12:50:27 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max);

int	main(int ac, char *av[])
{
	int	min;
	int	max;
	int	*arr;
	int i;

	if (ac == 3)
	{
		min = atoi(av[1]);
		max = atoi(av[2]);
		printf("ft_range(min(%d), max(%d)) = ", min, max);
		arr = ft_range(min, max);
		i = 0;
		while (i < (max - min))
		{
			printf("%d, ", arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
	}
}
