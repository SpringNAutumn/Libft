/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:52 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 16:10:52 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	caca;
	char	*tru;
	int		i;

	i = 0;
	tru = (char *) s;
	caca = (char) c;
	while (*(tru + i))
	{
		if (*(tru + i) == caca)
			return (tru + i);
		i ++;
	}
	if (caca == '\0')
		return (tru + i);
	return (NULL);
}
