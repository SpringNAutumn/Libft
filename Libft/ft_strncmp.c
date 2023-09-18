/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:15:13 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 19:15:13 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// its literally identical to the strcmp function but only compares to the Nth character. 
// compares until one null terminator is encountered in either of the string. 

int ft_strncmp(const char*s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i]) 
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    i++;       
    }
}