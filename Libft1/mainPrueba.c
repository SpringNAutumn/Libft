/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainPrueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:03 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/10/18 12:29:03 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print_list(t_list *list);


int main (void)
{
	t_list *nuevo;
	t_list *nuevi;

	nuevo =(t_list) ft_lstnew("hola");
	nuevi =(t_list) ft_lstnew("que tal");
	
	ft_lstadd_front(&nuevo, nuevi);

	print_list(nuevo);

	return (0);
}

void print_list(t_list *list)
{
    while (list != NULL)
    {
        printf("%s\n", (char *)list->content);
        list = list->next;
    }
}
