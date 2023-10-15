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
#include <ctype.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*suwi;
	int				i;

	suwi = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*suwi == c)
		{
			return ((void *)(suwi));
			suwi++;
			i++;
		}
	}
	return (0);
}
