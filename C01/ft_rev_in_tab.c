#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}
