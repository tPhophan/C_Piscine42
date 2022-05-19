/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:22:03 by tphophan          #+#    #+#             */
/*   Updated: 2022/03/23 11:52:56 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c);
	
int main(void)
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = "aasdu \revzx[o[oira";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = "omppelle\tte daaa \bfsdolmage";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = "coez,\?.lduf@c\a6vae fef";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = " Banana!!!!!!!!!! \' rfg";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = "roquefort`\"e{fort\v10e-e_tem,bolor feff";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str = " we 9are 78\familly x1F rgfenf";
	ft_putstr_non_printable(str);
}
