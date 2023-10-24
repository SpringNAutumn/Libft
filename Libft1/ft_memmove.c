/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:41:02 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/14 18:41:02 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*desti;
	unsigned char	*sourc;

	i = 0;
	desti = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	if (sourc > desti)
	{
		ft_memcpy(desti, sourc, n);
	}
	else if (sourc < desti)
	{
		i = n;
		while (i > 0)
		{
			desti[i - 1] = sourc[i - 1];
			i--;
		}
	}
	return (desti);
}
