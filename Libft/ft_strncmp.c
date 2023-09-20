/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:15:13 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 19:15:13 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stddef.h>

int ft_strlen(const char* s);

// be careful to return all possible cases. 
int ft_strncmp(const char*s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}