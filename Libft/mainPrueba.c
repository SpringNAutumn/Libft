
// para que el main compile y lea el memset tenemos que compilarlo todo junto.
#include <stdio.h>

size_t strlen(const char *s);

int main (void)
{   
    char strt[50] = "Hola que tal estamos";
    printf("%ld", strlen(strt));
    return (0);
}