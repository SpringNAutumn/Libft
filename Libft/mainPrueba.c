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
        char strttt[40] = "Holo que tal ";
        char strtt2[40] = "Holo que ";

            int num = ft_memcmp(strttt, strtt2,10);

        printf("el primer valor que difiere de la cadena, difiere en  %d ",num);
        return (0);
    }