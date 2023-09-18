/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:54:36 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:54:36 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we have to be careful not to use sizeof and strlen because one 
// will give us the full size of the pointer and another one just the size of the string. 
// strlcat as strlcopy will concatenate, taking into account that they check that size si the max buffer length of dest. 
# include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
   // Para concatenar tenemos en cuenta varias cosas. 
   // Primera. Vamos a reccorrer Dst hasta el caracter de escape.
   // Segunda. comprobamos que src sea menor o igual a size. 
   // Tercera. Mientras el indice de src sea menor a size vamos a copiar y concatenar.
    int dstlen = ft_strlen(dst);
    int i;
    int c;

    c = 0;
    i = dstlen;

// si el dest len es mayor o igual al size aka el des.
    if (dstlen >= size)
        return (ft_strlen(src) + size)
    
    else 
    {
        // esto es para copiar hasta maximo size - 1 ya que tenemos que insertar el caracter nulo al final del string.
        while (src[c] && i < size - 1)
        {
            dst[i] = src[c];
            c ++;
            i ++;
        }

        dst[i] = "\0";

        // ¿ Que vamos a retornar??
        return ;
    }
}