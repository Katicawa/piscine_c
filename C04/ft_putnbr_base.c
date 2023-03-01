#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while(i < size)
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
	if(nb == - 2147483648)
	{
		write(1, "- 2147483648", 12);
		return;
	}
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = - nb;
	}
    if(nb == 0)
	{
		write(1, "0", 1);
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
	while(print_in_tab < offset)
	{
		write(1, &tab[print_in_tab],1);
		print_in_tab++;
	}
}

int	ft_baselen(char *base)
{
	int i;

	i = 0;
	while(base[i])
		i++;
	return(i);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int denominator;
	int result;

	baselen = ft_baselen(base);
	denominator = 1;
	while ((nbr / denominator) >= baselen)
		denominator = denominator * baselen;
	while (denominator > 0)
    {
      result = (nbr / denominator) % baselen;
      write(1, &base[result], 1);
      denominator = denominator / baselen;
    }
}