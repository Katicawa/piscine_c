#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = n;
	while ( i < n - 1)

	i = 0;
	while (i < n -1)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i++])
		dest[i] = '/0';
	return (dest);
}
