
// para que el main compile y lea el memset tenemos que compilarlo todo junto.

#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n);

int main (void)
{   
    char strt[50] = "Hola que tal estamos";
    char strt2[50];

    void *prueba = strt;
    void *pruebo = strt2;

    printf("%s",(char*)memcpy(pruebo, prueba, 20));
    return (0);
}