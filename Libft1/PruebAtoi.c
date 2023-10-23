#include "libft.h"

// la prueba atoi 
// recordemos que el atoi convertia de char a int una cadena de digitos.
int	ft_atoi(const char *nptr);

int	main(void)
{
	int n = ft_atoi("123123");
	printf("%d",n);
	return (0);
}