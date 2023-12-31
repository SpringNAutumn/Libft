/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:15:16 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/10/16 19:15:16 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*uwu;

	uwu = *lst;
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (uwu->next)
		uwu = uwu->next;
	uwu->next = new;
}
