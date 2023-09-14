/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:36:44 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/13 18:36:44 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a string as an argument and returns its length

size_t strlen(const char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}