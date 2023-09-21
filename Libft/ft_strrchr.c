/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:49 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 16:10:49 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <ctype.h>

size_t ft_strlen(const char *s);

    // returns the last occurrence of the character c in the string s.
    char *ft_strrchr(const char *s, int c)
    {
        int i;

        i = ft_strlen(s) - 1;
        
        while ( i >= 0)
        {
            if  (s[i] == c) 
                return (char *)s + i;
            i --;
        }
        return 0;
    }