/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/27 11:20:06 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		o;
	char	*s2;

	i = 0;
	o = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start < ft_strlen(s))
	{
		s2 = malloc(len + 1);
		if (!s2)
			return (NULL);
		while (s[i] && o < len)
		{
			s2[o] = s[start + i];
			o++;
			i++;
		}
	}
	s2[o] = '\0';
	return (s2);
	free (s2);
}
