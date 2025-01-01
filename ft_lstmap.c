#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	t_list *content;
	struct node *next;
}				t_list;

void	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*newlst; 
	t_list	*newnode;
	
	if (!lst)
		return (NULL);
	newlst = NULL;
	
	while (lst)
	{
		newnode = ft_lstnew(f(lst -> content));
		if (!newnode)
		{
			ft_lstclear(&newlst, del); 
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst -> next;
	}
	return (newlst);
}
