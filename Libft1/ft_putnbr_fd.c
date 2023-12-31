/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:08 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	recursion(long int n, int fd)
{
	int	aux;

	aux = 0;
	if (n > 0)
	{
		recursion (n / 10, fd);
		aux = (n % 10) + '0';
		write (fd, &aux, 1);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	o;

	o = (long int)n;
	if (o < 0)
	{
		write (fd, "-", 1);
		o *= -1;
	}
	if (o == 0)
		write (fd, "0", 1);
	else
		recursion(o, fd);
}
