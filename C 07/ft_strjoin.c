/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:53:53 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/05 15:26:26 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sz;
	int		index;
	int		istr;

	str = malloc(sizeof(strs));
	sz = 0;
	istr = 0;
	while (sz < size)
	{
		index = 0;
		while (strs[sz][index] != '\0')
		{
			str[istr] = strs[sz][index];
			istr++;
			index++;
		}
		index = 0;
		while (sep[index] != '\0' && sz != size - 1)
		{
			str[istr] = sep[index];
			istr++;
			index++;
		}
		sz++;
	}
	str[istr] = '\0';
	return (str);
}

#include<stdio.h>

int main(int ac, char **av)
{
	char *sep;

	(void)ac;
	sep = ", ";
	printf("%s\n", ft_strjoin(4, av, sep));
	return (0);
}