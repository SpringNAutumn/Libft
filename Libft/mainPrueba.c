
// para que el main compile y lea el memset tenemos que compilarlo todo junto.
#include <stdio.h>

void *memset(void *b, int c, size_t len);

int main (void)
{   
    char strt[50] = "Hola que tal estamos";
    memset(strt,'$', 3);
    printf("%s", strt);
    return (0);
}