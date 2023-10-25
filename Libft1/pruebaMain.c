
#include "libft.h"

t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int main (void)
{
    t_list **listilla = null;
    t_list *no8 = ft_lstnew(1);
    t_list *no1 = ft_lstnew(13);
    t_list *no20 = ft_lstnew(123);
    ft_lstadd_back(listilla, no8);

}
