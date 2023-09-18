
// para que el main compile y lea el memset tenemos que compilarlo todo junto.

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
# include <string.h>

char *ft_strrchr(const char *s, int c);

    int main (void)
    {   
        char strttt[40] = "Hola que tal estamos";

        int valorfinal =  ft_strrchr(strttt, 'a') - strttt + 1;

        printf(" %d tiene que dar 17", valorfinal);

        // Desreferenciando un puntero que es nulo da error de segmentacion. 
        printf("%c",*ft_strrchr(strttt, 'a'));
        return (0);
    }