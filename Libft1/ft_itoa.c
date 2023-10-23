/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:00 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


char	*mallockin(char *str, int cont, int n, int *i);

char	*ft_itoa(int n)
{
	int		cont;
	int		i;
	char	*str;
	int		ni;

	ni = n;
	cont = 1;
	i = 0;
	while (ni / 10 != 0)
	{
		ni = n / 10;
		cont ++;
	}
	str = mallockin(str, cont, n, &i);
	str[cont] = '\0';
	cont --;
	if (n == 0)
		str[0] = 0;
	while (n / 10 != 0)
	{
		str[i] = n / (10 * cont);
		n = n / 10;
		cont --;
	}
	return (str);
}

char	*mallockin(char *str, int cont, int n, int *i)
{
	if (n < 0)
	{
		str = malloc (sizeof (char *) * (cont + 2));
		str[*i] = '-';
		*i += 1;
	}
	else
		str = malloc (sizeof (char *) * cont + 1);
	return (str);
}
