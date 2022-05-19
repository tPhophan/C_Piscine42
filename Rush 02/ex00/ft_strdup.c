#include "rush02.h"
#include <stdlib.h>

char    *ft_strdup1(char *src)
{   
	int     i;
	int     len;
	char*dst;

	len = 0;
	while (src[len] != '\0' && ('0' <= src[len] && src[len] <= '9'))
		len++;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char		*dst;

	len = 0;
	while (src[len] != '\0' && ('a' <= src[len] && src[len] <= 'z'))
		len++;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len && src[i] != 'p')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}