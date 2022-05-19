#include <stdlib.h>

int ft_chk_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int ft_count_words(char *str, char *charset)
{
	int	i;
	int	c_word;

	c_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_chk_charset(str[i + 1], charset) == 1 && ft_chk_charset(str[i], charset) == 0)
			c_word++;
		i++;
	}
	return (c_word);
}

void    ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (ft_chk_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void    ft_split_to_res(char **res, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_chk_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_chk_charset(str[i + j], charset) == 0)
				j++;
			res[word] = (char*)malloc(sizeof(char) * (j + 1));
			ft_strcpy(res[word], str + i, charset);
			i += j;
			word++;
		}
	}
    res[word] = '\0';
}

char    **ft_split(char *str, char *charset)
{
	char	**res;
	int		c_word;

	c_word = ft_count_words(str, charset);
	res = (char**)malloc(sizeof(char*) * (c_word + 1));
	ft_split_to_res(res, str, charset);
	return (res);
}