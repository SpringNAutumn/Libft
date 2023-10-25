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

char	*mallockin(int *cont, long int n);

char	*ft_itoa(int n)
{
	int			cont;
	char		*str;
	long int	ni;

	ni = n;
	cont = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		cont ++;
	}
	str = mallockin(&cont, ni);
	if (!str)
		return (0);
	str[cont--] = '\0';
	if (ni < 0)
		ni = -ni;
	if (ni == 0)
		str[0] = '0';
	while (ni != 0)
	{
		str[cont--] = (ni % 10) + '0';
		ni = ni / 10;
	}
	return (str);
}

char	*mallockin(int *cont, long int n)
{
	char	*str;

	if (n < 0)
	{
		str = malloc (sizeof (char) * (*cont + 2));
		if (!str)
			return (0);
		str[0] = '-';
		*cont += 1;
	}
	else
	{
		str = malloc (sizeof (char) * (*cont + 1));
		if (!str)
			return (0);
	}
	return (str);
}
