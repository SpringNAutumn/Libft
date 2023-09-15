/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:41:02 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/14 18:41:02 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// igual que el Memcpy. The memory areas can overlap. 
// what we are going to do is check if the memory of src is 
// before or after the memory of dest. If it is before we copy
// from the beginning to the end. If it is after we copy from the end to the beginning.

#include <ctype.h>
#include <stddef.h>

void * ft_memmove(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;
    char* det = dest;
    const char* sour = src;

    if (sour > det)
    {
        while (i < n)
        {
            det[i] = sour[i];
            i++;
        }
    }
    else if (sour < det)
    {
        i = n;

        while (i > 0)
        {
            det[i-1] = sour[i-1];
            i--;
        }
    }
    return det;
   
}
