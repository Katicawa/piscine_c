#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int turn;
	int i;

	turn = 0;
	while (turn < size)
	{
		i = turn;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swap;
			}
			i++;
		}
		turn++;
	}
}