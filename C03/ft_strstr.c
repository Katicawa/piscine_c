#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (to_find != str[i])
			i++;
		else
		return (&str[i]);
	}
	return (0);
}
