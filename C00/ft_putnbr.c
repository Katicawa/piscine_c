#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr(int nb)
{
	int		offset;
	int		print_in_tab;
	char	tab[13];

	offset = 0;
	if (nb == - 2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
    	if (nb == 0)
	{
		ft_putchar('0');
		return;
	}
	while (nb != 0)
	{
		tab[offset] = (nb % 10) + '0';
		nb = nb / 10;
		offset++;
	}
	ft_rev_int_tab(tab, offset);
	print_in_tab = 0;
	while (print_in_tab < offset)
	{
		ft_putchar(tab[print_in_tab]);
		print_in_tab++;
	}
}
