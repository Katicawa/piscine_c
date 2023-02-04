#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *dest)
{
	int i;

	i = 0;
	while(dest[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int destlen;
	int i;

	destlen = ft_strlen(dest);
	i = 0;
	while(src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen + i] = '\0';
	return(dest);
}