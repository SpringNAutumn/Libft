#include "libft.h"

int main (void)
{
	char *strt = "hola que tal como estas";
	char c = 'a';
	int i = 0;

	char **strt2 = ft_split(strt, c);

	while(strt2[i])
	{
		printf(" string %d : [%s] \n" , i , strt2[i]);
		i ++;
	}
	return (0);
}
