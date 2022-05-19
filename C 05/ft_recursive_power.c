int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power < 1)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

#include<stdio.h>

int main(void)
{
    int nb = 16;
    int power = 2;
    
    printf("%d", ft_recursive_power(nb, power));
}