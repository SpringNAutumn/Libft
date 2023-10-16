/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:54:36 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:54:36 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dstlen;
	int	srclen;
	int	i;
	int	c;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	c = 0;
	i = dstlen;
	if (dstlen >= size)
		return (ft_strlen(src) + size);
	else
	{
		while (src[c] && i < size - 1)
		{
			dst[i] = src[c];
			c ++;
			i ++;
		}
		dst[i] = '\0';
		return (dstlen + srclen);
	}
}
