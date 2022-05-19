#include <stdio.h>

int main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*res;

	nbr = "   -+102345";
	base_from = "0123456789";
	base_to = "01";
	res = ft_convert_base(nbr, base_from, base_to);
    printf("%s", res);
	free(res);
    return (0);
}