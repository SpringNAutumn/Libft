
// para que el main compile y lea el memset tenemos que compilarlo todo junto.

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main (void)
{   
    char strt[50] = "Hola que tal estamos";
    char strt2[50];

    void *prueba = strt;
    void *pruebo = strt2;

    printf("%s",(char*)ft_memmove(strt2, strt, 20));
    return (0);
}