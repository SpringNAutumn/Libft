/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:48:32 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/13 15:48:32 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset function writes len bytes of value c converted to an unsigned char to the string B.

#include <ctype.h>
#include <stddef.h>

 // copia hasta los primeros len caracteres el caracter c a la string que apunta la varauable b 
 // el puntero es un puntero void por lo que no tiene tipo de dato. si lo queremos utilizar tendremos que castearlo.

void *memset(void *b, int c, size_t len)
{
    int i;

    // estamos creando un puntero ptr y le estamos dando la direccion de memoria de b.

    unsigned char *ptr = b;

    i = 0;
    // nos situamos en el inicio de la cadena. Empezamos a copiar la representacion ascii de c, hasta len, vamos restando len. 
    
    while (i < len)
    {
        ptr[i] = c;
        i ++;
    }
}