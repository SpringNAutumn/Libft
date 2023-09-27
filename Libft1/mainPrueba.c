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
        char substr[] = "hola que tal";
        
        char *nueva = ft_substr(substr, 2, 6);
        printf(" la string creada es: %s\n", nueva);
        return (0);
    }
    // void *calloc (size_t count size_t size);