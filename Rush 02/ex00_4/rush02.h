#ifndef RUSH02_H
# define RUSH02_H

typedef struct	s_list
{
	unsigned int	nb;
	t_list	*val;
}		t_list;
unsigned int	ft_atoi(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
t_list	*process(char *file);

#endif