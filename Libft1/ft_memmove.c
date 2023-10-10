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

#include <ctype.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*det;
	const char	*sour;

	i = 0;
	det = dest;
	sour = src;

	if (sour > det)
	{
		while (i < n)
		{
			det[i] = sour[i];
			i++;
		}
	}
	else if (sour < det)
	{
		i = n;
		while (i > 0)
		{
			det[i - 1] = sour[i - 1];
			i--;
		}
	}
	return (det);
}
