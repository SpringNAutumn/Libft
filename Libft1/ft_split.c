/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:12 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int num_point (const char *s, char c);


char **ft_split (char const *s, char c)
{
    int n_subs = 0;
    int o = 0;
    int k = 0;
    int i = 0;
    char **strs;

    n_subs = num_point(s,c);

    // Aqui estamos reservando n_subs pero no con el length de cada cadena de caracteres. 
    // Tenemos que liberar para cada subcadena
    strs = malloc(n_subs * (sizeof(char *) + 1));

    if (strs == NULL)
        return NULL;

    while (s[o])
    {
        if (s[o] == c || !s[o + 1])
        {
            strs[k ++] = ft_substr(s, i, o);
        }
            i = o + 1;
    }
    
    o ++; 
    strs[k] = NULL;
    return (strs);
}

int num_point (const char *ncch, char c)
{
    int num = 0;
    int i = 0;
    
    while (ncch[i])
    {
        if (ncch[i] == c)
            num ++;
        i ++;
    }
    return num;
}