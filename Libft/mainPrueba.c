
// para que el main compile y lea el memset tenemos que compilarlo todo junto.

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

size_t *ft_strlcat(char* dst, const char *src, size_t size);


int main (void)
{   
    char strt[50] = "Hola que tal estamos";
    char strt2[50] = "chavalote";

    printf("%s",(char*)ft_strlcat(strt, strt2, 19));
    printf("%s", strt2);
    return (0);
}