#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	while(dest[i++])
		dest[i] = '/0';
	return(dest);
}
