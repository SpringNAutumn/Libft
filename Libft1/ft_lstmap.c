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

	if (!f || !del || !lst)
		return (NULL);
	// nlst = NULL;
	while (lst)
	{
		nlst = ft_lstnew(f(lst->content));
		if (!nlst)
		{
			del(f(lst->content));
			ft_lstclear(&aux, del);
			return (NULL);
		}
		// we should check that ft_lstadd_back is working properly
		ft_lstadd_back(&aux, nlst);
		if (!ft_lstlast(&aux))
			return (NULL);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (aux);
}
