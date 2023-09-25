/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:08:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/19 19:08:08 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// the string atoi converts the nptr string to an integer (type int).
// the function skips all white-space characters at the beginning of the string, converts the subsequent characters as part of the number, 
// and then stops when it encounters the first character that isn't a number.
// we have to be careful with the sign of the number, and the overflow.

int ft_atoi(const char *nptr)
{
    int i = 0;
    int res = 0;


    // Mientras nptr haya espacios lo que vamos a hacer es recorrerlos.
    while (nptr[i] >= 9 && nptr[i] <= nptr[i] <= 13 && nptr[i] == ' ')
        i ++;
    

    //Si en nptr hay signos de algun tipo vamos a recorrerlo pero solo lo que viene siendo una vez.
    if (nptr[i] == '+' || nptr[i] == '-')
        i ++;


    // Mientras nptr exista. Vamos a recorrer y comprobar que sean solo letras mayusculas o minsuculas. 
    while (nptr[i] != '\0' && (nptr[i] > 64 && nptr[i] < 91) || (nptr[i] > 96 && nptr[i] < 123))
    {
            res = (res * 10) + str[i] + '0';
            i ++;
    } 
    return res;
}