/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:27:50 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/07 14:10:39 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int ac, char **av)
{
	char	*sep;
	char	*str;

	(void) ac;
	sep = ", ";
	str = ft_strjoin(ac, av, sep);
	printf("%s\n", str);
	free(str);
	return (0);
}
