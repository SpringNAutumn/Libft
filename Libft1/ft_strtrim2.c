#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checks1(const char *s1, const char *set);

char *ft_strtrim(const char *s1, const char *set)
{
    int i = 0;
    while (checks1(&s1[i], set))
        i++;
    int j = strlen(s1) - 1;
    while (j > i && checks1(&s1[j], set))
        j--;
    char *trimmed_str = malloc(j - i + 2);
    if (!trimmed_str)
        return (NULL);
    strncpy(trimmed_str, &s1[i], j - i + 1);
    trimmed_str[j - i + 1] = '\0';
    return (trimmed_str);
}

int checks1(const char *s1, const char *set)
{
    int i = 0;
    while (set[i])
    {
        if (*s1 == set[i])
            return (1);
        i++;
    }
    return (0);
}

int main(void)
{
    const char *str1 = "hola que tal buenas tardes";
    const char *set = "a";

    char *trimmed_str = ft_strtrim(str1, set);
    if (trimmed_str)
    {
        printf("%s", trimmed_str);
        free(trimmed_str);
    }

    return (0);
}
