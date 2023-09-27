/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/27 12:41:39 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// se utiliza malloc. 

// la primera string.    //s3 es la string a añadir a s1
char *ft_strjoin (char const *s1, char const *s2)
{
    char *s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

    // devuelve null si falla la reserva de memoria.

    // reservamos con malloc y devolvemos una nueva string que resulta de
    // la concatenacion de 's1' y 's2'.

    
return s3;
}