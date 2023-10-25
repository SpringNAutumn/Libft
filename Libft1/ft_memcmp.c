/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:32:52 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 19:32:52 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*eseuno;
	unsigned char	*esedos;

	eseuno = (unsigned char *) s1;
	esedos = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (eseuno[i] != esedos[i])
			return (eseuno[i] - esedos[i]);
		i ++;
	}
	return (0);
}
