#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
<<<<<<< HEAD
	while(str[i] == '+' || str[i] == '-')
=======
	while(str[i] == '+' || str[i] == '_')
>>>>>>> d14594e295e8536d790bda2bd93acff7f998c6ee
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);
}