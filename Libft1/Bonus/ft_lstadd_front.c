/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:15:12 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/10/16 19:15:12 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst)
    {
        if (*lst)
            new->next = *lst;
        *lst = new;
    }
	lst = malloc (sizeof(t_list));
	if (!lst)
		free(lst);
	
}
