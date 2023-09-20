/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:32:54 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 19:32:54 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stddef.h>
int ft_strlen(const char *s);
// scans the initial n bytes of the memory area pointed to by s for the first 
// instance of c Both c and the bytes of the memory area pointed are interpreted as unsigned char. 
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char*suwi = (unsigned char*) s;
    int i;

    i = 0;
    // seach up to n bytes of the memory pointed by s for the n ascii character. 
    while ( i < n)
    {
        if (*suwi == c)
            return (void*)(suwi);
        suwi++;
        i++;
    }
    return 0;   
}