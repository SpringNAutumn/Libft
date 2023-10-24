/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:08:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/19 19:08:08 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	o;

	o = 1;
	i = 0;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i ++;
	if (nptr[i] == '-')
		o = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i ++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + nptr[i] - '0';
		i ++;
	}
	return (res * o);
}
