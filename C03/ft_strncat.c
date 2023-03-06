#include <unistd.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	destlen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb - 1)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
