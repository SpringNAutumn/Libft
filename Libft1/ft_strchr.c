/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:52 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 16:10:52 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// the strchr() function returns a pointer to the first occurrence of the character c in the string s.
    char *ft_strchr(const char *s, int c)
    {
       while (*s != '\0')
       {
        if (*s == c)
            return (char *)s;
        s++;
       }

    return NULL;
    }