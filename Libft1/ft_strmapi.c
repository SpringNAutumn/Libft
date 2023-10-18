/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:21 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
=======

size_t	ft_strlen(const char *s);
>>>>>>> 4120023c8443d4c4988cb67e3285ef0a57726deb

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	int		i;
	char	*sol;
	int		len;

	len = ft_strlen(s);
	sol = malloc(sizeof(char) * (len + 1));
	if (sol == NULL)
		return (sol);
	while (i < len)
	{
		sol [i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
