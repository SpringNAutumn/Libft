/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainPrueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:06:58 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/20 10:06:58 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

    int main (void)
    {
        char* str1 = "hola que tal estamos";
        char** str2;

        str2 = ft_split (str1, 'a');

        printf ("Vamos a imprimir la primera subistringi: %s" , *str2);
        return (0);
    }