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

char	*ft_itoa(int n)
{
	int		cont;
	int		i;
	char	*str;

	cont = 1;
	i = 0;
	while (n % 10 != 0)
	{
		n = n / 10;
		cont ++;
	}
	if (n < 0)
		str = malloc (sizeof (char *) * (cont + 1));
	else
		str = malloc (sizeof (char *) * cont);
	while (n % 10 != 0)
	{
		str[i] = n / (10 * cont - 1);
		n = n / 10;
	}
	return (str);
}
