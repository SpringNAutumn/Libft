/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/28 10:19:47 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		o;
	char	*s3;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	o = 0;
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i ++;
	}
	while (s2[o])
	{
		s3[i] = s2[o];
		o ++;
		i ++;
	}
	s3[i] = '\0';
	return (s3);
}
