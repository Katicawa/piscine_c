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
    int            i;
//taille de la table ascii
    unsigned char  check[256];

    i = 0;
    while (i < 256)
//nb de fois qu'on tombre sur un char
        check[i++] = 0;
    i = 0;
    while (base[i])
    {
//vérifie le nb de fois qu'on est tombé sur un char
        check[(unsigned char)base[i]]++;
        if (check[(unsigned char)base[i]] > 1)
            return (1);
        i++;
    }
//vérifie si la chaine contient des "+" ou des "-"
    if (check['+'] || check['-'])
        return (1);
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
    if (base_len < 2)
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