
// para que el main compile y lea el memset tenemos que compilarlo todo junto.

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
# include <string.h>

char *ft_strchr(const char *s, int c);

int main (void)
{   
     char strttt[40] = "Hol que tl estmos";

    ft_strchr(strttt, 'a');
    printf("%c",*ft_strchr(strttt, 'a'));
        //printf("%zu",ft_strlcat(strt, strt2, 30));
        // printf("%s", str);
        // printf("%zu", ft_strlen(str));
        // memset (strttt, 0 , sizeof(strttt));

    return (0);
}