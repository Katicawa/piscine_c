#include <unistd.h>
#include <string.h>

int	t_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned i;

	i = 0;
	while(s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
