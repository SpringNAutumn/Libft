/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:44:24 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/14 15:44:24 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*det;
	const char	*sour;

	i = 0;
	det = dest;
	sour = src;
	while (i < n)
	{
		det[i] = sour[i];
		i ++;
	}
	return (dest);
}
