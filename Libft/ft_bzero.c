/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:18:37 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/13 19:18:37 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stddef.h>

void *ft_bzero(void *s, size_t n)
{
    int i;
    unsigned char *ptr;

    ptr = b;
    i = 0;
    while (i < len)
    {
        ptr[i] = '\0';
        i ++;
    }
}