/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:14:55 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/10/16 19:14:55 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*aux;

	nlst = NULL;
	aux = NULL;
	if (!lst || !f || !del)
		return (NULL);
	if (lst)
	{
		while (lst)
		{
			nlst = ft_lstnew(f(lst->content));
			if (!nlst)
			{
				del(nlst->content);
				ft_lstclear(&aux, del);
				return (NULL);
			}
			ft_lstadd_back(&aux, nlst);
			lst = lst->next;
		}
	}
	ft_lstclear(&lst, del);
	return (aux);
}
