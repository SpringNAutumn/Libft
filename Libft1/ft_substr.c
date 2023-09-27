/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/27 10:30:17 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2 = ft_calloc(len + 1, sizeof(char));
    if (!s2)
        return NULL;

    int i = 0;
    int o = 0;
    
    while (s[i])
    {
        if ((i) == start)
        {
            while (i < start + len)
            {
                s2[o] = s[i];
                o++;
                i++;
            }
            break;
        } else
            i ++; 
    }
        s2[o] = '\0';
    return s2;
}
