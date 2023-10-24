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
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*suwi;
	size_t			i;

	suwi = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*suwi == (unsigned char) c)
			return ((void *)(suwi));
		suwi++;
		i++;
	}
	return (0);
}
