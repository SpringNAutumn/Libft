/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:44:28 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:44:28 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			sizesrc;
	size_t			i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (sizesrc < size)
	{
		while (i < sizesrc)
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = '\0';
	}
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (sizesrc);
}
