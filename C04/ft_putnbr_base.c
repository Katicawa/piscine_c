#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_base_len(char *base)
{
    int i;

    i = 0;
    while (base[i])
        i++;
    return (i);
}

int ft_check_base(char *base)
{
    int	i;
    int	j;

    i = 0;
    j = 0;
//check les char en double
    while (base[i])
    {
        while (base[j])
        {
            if (base[i] == base[j])
            	j++;
			else
				return (1);
        }
        i++;
    }
    i = 0;
//check les char '+' & '-'
    while (base[i])
    {
    	if (base[i] == '-' || base[i] == '+')
      		return (1);
    	i++;
	}
	return (0);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int  base_len;
	int  denominator;
    int  result;

    base_len = ft_base_len(base);
    denominator = 1;
	if (ft_check_base(base) == 1)
		return;
	if (ft_base_len(base) < 2)
		return;
//gére les négatifs
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
//recherche la plus grande puissance
    while ((nbr / denominator) >= base_len)
        denominator = denominator * base_len;
//conversion
    while (denominator > 0)
    {
        result = (nbr / denominator) % base_len;
        ft_putchar(base[result]);
//car while(denominator > 0)
        denominator = denominator/ base_len;
    }
}