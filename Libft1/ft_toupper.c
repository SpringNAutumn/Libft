/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:30:03 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/18 15:30:03 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// pasa el valor ASCII del caracter y capitaliza la letra en caso de que sea minuscula. 

int ft_toupper (int c)
{
    if (c > 96 && c < 123)
        c -= 32;
}