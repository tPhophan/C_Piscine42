/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:31:07 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/07 14:02:21 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*res;

	nbr = "   -+--102345a6789";
	base_from = "0123456789";
	base_to = "01";
	res = ft_convert_base(nbr, base_from, base_to);
	printf("%s", res);
	free(res);
    return (0);
}
