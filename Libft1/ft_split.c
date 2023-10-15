/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:12 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// rehacer toda la funcion ya que esta hecha mierda. 

char	**ft_split(char const *s, char c)
{
	int		n_subs;
	int		j;
	int		i;
	char	**strs;
	int		len_cadena;

	j = 0;
	i = 0;
	n_subs = countstr(s, c);
	strs = malloc(n_subs * (sizeof(char *) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i ++;
		if (s[i] == '\0')
			break ;
		len_cadena = len_sub(s, c, i);
		strs [j] = malloc((sizeof(char) * len_cadena) + 1);
		if (!Strs[j])
			return (freeing(strs, i));
		i += filler(strs, s, i, len_cadena);
		j ++;
	}
	sol[j] = NULL;
	return (strs);
}

static int	len_sub(char const *s, char c, char len)
{
	int	sol;

	sol = 0;
	while (*(s + len))
	{
		if (*(s + len) == c)
			return (sol);
		sol ++;
		len ++;
	}
	return (sol);
}

static int	filler(char *str, char *s, int i, int sublen)
{
	int	j;

	j = 0;
	while (j < sublen)
	{
		str[j] = s[i];
		j ++;
		pos ++;
	}
	sol[j] = '\0';
	return (j);

}

static char	**freeing(char **strs, int len_cadena)
{
	int	i;

	i = 0;
	while (i < len_cadena)
	{
		free(strs[i]);
		i ++;
	}
	free (strs);
	return (0);
}

static int	countstr(char const *s, char c)
{
	char	ult;
	int		i;
	int		cont;

	ult = c;
	i = 0;
	cont = 0;

	while (*(s + i))
	{

		if (ult == c && s[i] != c)
		{
			cont++;
		}
		ult = s[i];
		i++;

	}
	return (cont);
}
