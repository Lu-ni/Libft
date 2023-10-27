#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list	*node;
	
	node = (t_list  *)malloc(sizeof(struct s_list));
	node->content = content;
	node->next = NULL;
	return (node);
}
