/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/28 10:23:20 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	checks1(const char *s1, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		fin;
	char	*s3;
	int		i;

	i = 0;
	fin = ft_strlen(s1) - 1;
	ini = 0;
	while (s1[ini] && checks1 (s1 + ini, set) == 42)
		ini ++;
	while (checks1 (s1 + ini, set) == 42 && fin > ini)
		fin --;
	if (ini > fin)
		return (ft_strdup (""));
	s3 = malloc (fin - ini + 2);
	while (ini <= fin)
	{
		s3[i++] == s1[ini];
		ini ++;
	}
	s3[i] = '\0';
}

int	checks1(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (*s1 == set[i])
			return (42);
		else
			i ++;
	}
	return (0);
}

int	main (void)
{
	char	*str1 = "hola que tal buenas tardes";
	char	*set = (char*)'a';

	ft_strtrim(str1, set);
	printf("%s", str1);

	return	(0);
}
