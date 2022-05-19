/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:49:21 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/28 16:13:09 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	istr;
	int	ifind;

	istr = 0;
	while (str[istr] != '\0')
	{
		ifind = 0;
		while (str[istr + ifind] != '\0' && str[istr + ifind] == to_find[ifind])
		{
			if (to_find[ifind + 1] == '\0')
				return (&str[istr]);
			++ifind;
		}
		++istr;
	}
	return (0);
}

int main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "W";

	printf("ft_strtsr : %s\n", ft_strstr(str, to_find));
	printf("strtsr : %s\n", strstr(str, to_find));
}
