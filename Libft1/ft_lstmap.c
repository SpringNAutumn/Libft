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
	void	*content;

	if (!f || !del)
		return (NULL);
	aux = NULL;
	while (lst)
	{
		content = f(lst->content);
		nlst = ft_lstnew(content);
		if (!nlst)
		{
			del(content);
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&aux, nlst);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (aux);
}

/*
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sol;
	t_list	*nodo;
	void	*content;

	if (!f || !del)
		return (NULL);
	sol = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		nodo = ft_lstnew(content);
		if (!nodo)
		{
			(*del)(content);
			ft_lstclear(&sol, del);
			return (0);
		}
		ft_lstadd_back(&sol, nodo);
		lst = lst->next;
	}
	return (sol);
}
*/