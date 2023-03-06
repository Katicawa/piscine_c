#include <unistd.h>

int	ft_strlen(char *dest)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] && i < size - 1)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + i);
}
