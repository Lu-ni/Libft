#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *firstnode;
	t_list *actualnode;

	actualnode = lst;
	firstnode = NULL;
	if (!lst)
		return NULL;
	firstnode = ft_lstnew(f(actualnode->content));
	actualnode = firstnode;
	if (!firstnode)
		return NULL;
	lst = lst->next;
	while (lst)
	{
		actualnode->next = ft_lstnew(f(lst->content));
		if (!actualnode->next)
		{
			ft_lstclear(&firstnode, del);
			return NULL;
		}
		actualnode = actualnode->next;
		lst = lst->next;
	}
	return firstnode;
}
