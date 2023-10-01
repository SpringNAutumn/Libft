/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/27 10:22:05 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// it allocates the requested memory and returns a pointer to it. the only diference between malloc and calloc is that malloc does not set the requested memory to 0 whereas calloc does it
// vamos realizando malloc hasta el c
void *ft_calloc (size_t count, size_t size)
{
    // count is the number of elements to allocate and size is the size in bytes of each element.
    void *ptr = malloc(count * size);
    // vamos recorriendo y asignando cada elemento
    if(ptr)
       ft_memset(ptr, 0, count * size);

    return ptr;
}