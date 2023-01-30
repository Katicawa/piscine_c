#include <unistd.h>
#include <string.h>

int ft_is_printable(char c)
{
    return (!(c < 32 || c > 126));
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_is_printable(str[i]))
			write(1, &str[i], 1);
        else
            write(1, ".", 1);
        i++;
    }
}