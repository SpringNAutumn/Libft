/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/20 11:04:51 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* 	ft_strnstr (const char *haystack, const char *needle, size_t len)
{
    char strttt[40] = "Holo que tal ";
    char strtt2[40] = "que";

    if (*haystack == '\0')
        return (char*)needle;

    if (len == 0)
        return 0;

    // lo que quede por comparar debe ser mayor o igual al length de needle porque si no comparará toda la cadena
    int len_need = ft_strlen(needle);

    int i;
    i = 0;
    while (i < len && len - i >= len_need) 
    {
        if (ft_strncmp(haystack + i , needle, len_need) == 0)
            return ((char*)haystack + i);
        i ++;
    }

    return (0);
}