/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:49 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 16:10:49 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		o;
	char	a;
	char	*cad;

	a = (char)c;
	o = -1;
	i = 0;
	cad = (char *)s;
	while (*(cad + i))
	{
		if (*(cad + i) == a)
			o = i;
		i ++;
	}
	if (a == '\0')
		return (cad + i);
	else if (o == -1)
		return (0);
	return (cad + o);
}
