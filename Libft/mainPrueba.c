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
        char strtt2[40] = " que ";

        char *ioua = ft_strnstr(strttt, strtt2, 9);

        printf("La cadena se encuentra %s", ioua);
        return (0);
    }