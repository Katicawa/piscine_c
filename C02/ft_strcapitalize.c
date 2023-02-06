#include <unistd.h>
#include <string.h>

int is_lw(char chr)
{
    return (chr >= 'a' && chr <= 'z');
}

int is_up(char chr)
{
    return (chr >= 'A' && chr <= 'Z');
}

int is_num(char chr)
{
    return (chr >= '0' && chr <= '9');
}

int is_alphanum(char chr)
{
    return (is_lw(chr) || is_up(chr) || is_num(chr));
}

char    *ft_strcapitalize(char *str)
{
    int    i;

    if (is_lw(str[0]))
        str[0] = str[0] - 32;
    i = 1;
    while (str[i])
    {
        if (is_lw(str[i]) || is_up(str[i]))
        {
            if (is_up(str[i]))
                str[i] = str[i] + 32;
            if (!is_alphanum(str[i - 1]))
                str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
<<<<<<< HEAD
}
=======
}
>>>>>>> 222f0b24afa0d5ceb6a7003346fdece0a70e8671
