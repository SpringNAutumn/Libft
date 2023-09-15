/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:44:28 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:44:28 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Are made to be safer than strncpy and strncat. 
// contrary to those functions they take the full size of the buffer (i assume using sizeof())
// if the source string (src) is longer than the speccified buffer. (quiere decir dst?) copia hasta size - 1 
// solucion a mi duda. El size que se pasa es el max size del dest buffer. 
#include <ctype.h>
#include <stddef.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
    const size_t sizesrc = sizeof(src);
    int i = 0;

    // Si es menor copia src a dest y le añade un caracter de escape (nulo)
    if (sizesrc < size)
    {
        while (src[i])
        {
            dest[i]= src[i];
            i++;
        }
        dest[i] = '\0'
    }
    // Para los demas casos lo copia igualmente hasta que cabe -1 y le añade un caracter nulo
    else if (size != 0)
    {

        // Duda. hay que copiar hasta dos menos que size. 
        // Uno porque estamos trabahando con indices y otro por que necesitamos insertar el caracter nulo
        while (i < size - 2)
        {
            dest[i] = src[i];
            i++;
        }
          dest[i] = '\0'
    }
}