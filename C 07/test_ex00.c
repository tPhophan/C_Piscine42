/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:00:21 by tphophan          #+#    #+#             */
/*   Updated: 2022/04/07 21:09:40 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;

	str = ft_strdup("");
    printf("%s\n", str);
	free(str);
    str = ft_strdup("hello 42");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("71AmjumRENgNq");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("hv0LSCCBRgJ");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("Ab0fkP");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("QH");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("6bJCbzOK47I4fq7");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("187tbmecGXHCpU2bIE");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("oslp8ABfqnsimB1ZmxkqsBcwqc7E");
    printf("%s\n", str);
    free(str);
    str = ft_strdup("RxR8mN");
    printf("%s\n", str);
    free(str);
}
