/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/20 11:04:51 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
  char strttt[40] = "Holo que tal ";
    char strtt2[40] = "que";
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	len_need;
	int	i;

	len_need = ft_strlen(needle);
	i = 0;
	if (*haystack == '\0')
		return ((char*)needle);
	if (len == 0)
		return (0);
	while (i < len && len - i >= len_need && *haystack != '\0')
	{
		if (ft_strncmp(haystack + i, needle, len_need) == 0)
			return ((char*)haystack + i);
		i ++;
	}
	return (0);
}
