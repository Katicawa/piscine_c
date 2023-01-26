#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = n;
	while(n > 0)
	{
		dest[n] = src[n];
		n--;
	}
	while(dest[i++])
		dest[i] = '/0';
	return(dest);
}