#include "rush02.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
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

unsigned int	ft_atoi(const char *str)
{
	unsigned int	res;
	int	i;

	res = 0;
	i = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
		i++;
	}
	if (i > 11)
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	return (res);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_getnb(int fd)
{
	int	i;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int	i;
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*process(char *file)
{
	int	i;
	int	fd;
	char	c[1];
	t_list	*tab;
	char *tmp;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 33)))
		exit(1);
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}

unsigned int	getdec(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned int	getmult(unsigned int nb)
{
	 if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(unsigned int n, t_list *tab, int *first)
{
	unsigned int i;
	unsigned int mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}
void    ft_free(t_list *tab)
{   
	unsigned int *nb;
	char    *val;
	int i;

     i = 0;
    while (tab[i] != '\0')
 	{
 		nb = &tab[i].nb;
 		val = tab[i].val;
 		free(nb);
 		free(val);
         i++;
    }
}

int	main(void)
{
	int	ac;
	char	*av;
	t_list *tab;
	int *first;
	int addr_first;
	unsigned int nb;

	ac = 2;
	av = "4294967295";
	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		nb = ft_atoi(av);
		tab = process("numbers.dict");
		ft_print(nb, tab, first);
		write(1, "\n", 1);
		ft_free(tab);
	}
	return (0);
}