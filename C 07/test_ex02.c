/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:05:53 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/05 12:53:15 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max);

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	*range;
	int	min;
	int	max;
	int i;

	if (ac == 3)
	{
		min = atoi(av[1]);
		max = atoi(av[2]);
		printf("ft_ultimate_range min(%d) max(%d) value(%d) = ", min, max, ft_ultimate_range(&range, min, max));
		i = 0;
		while (i < (max - min))
		{
			printf("%d, ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
}
