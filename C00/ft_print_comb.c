#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n;
	int	a;
	int	b;
	int	c;

	n = 0;
	while (n < 790)
	{
		a = n / 100;
		b = n / 10 % 10;
		c = n % 10;
		if (a < b && b < c)
		{
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			ft_putchar('0' + c);
			if (n != 789)
			{	
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n++;
	}
}