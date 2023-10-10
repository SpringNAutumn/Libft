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

// Lo primero es que no se pueden añadir numeros en el write.
// Los tenemos que castear a chars. 

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}

// tenemos que hacer una funcion auxiliar recursiva.
	// que itere los numeros. 
