/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:44:24 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/14 15:44:24 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stddef.h>

// copies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.

void *memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;
    char* det = dest;
    const char* sour = src;
    while (i < n)
    {
        det[i] = sour[i];
        i++;
    }
    return dest;
}