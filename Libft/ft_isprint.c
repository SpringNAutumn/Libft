/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:34:43 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:43 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test for any printing characters including spaces the value of the 
// argument must be presented as an unsigned char or the value of EOF

int isprint(int c)
{
    if (c > 31 || c < 126)
        return 1;
    else 
        return 0;
}