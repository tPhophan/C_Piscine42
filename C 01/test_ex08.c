#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int	tab[] = {4, 2, 1, 7, 6, 5, 0, 12, 11};
	int	size = 9;
	int i = 0;

	ft_sort_int_tab(tab,size);
	while (i < size)
	{
		if (i < size -1)
		{
			printf("%d, ", tab[i]);
		}
		else
		{
			printf("%d", tab[i]);
		}
		i++;
	}
}
