/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:15:09 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/10/16 19:15:09 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*auxi;

	if (!lst)
		return ;
	if (*lst)
	{
		while ((*lst)->next)
		{
			auxi = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = auxi;
		}
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
	}
}
