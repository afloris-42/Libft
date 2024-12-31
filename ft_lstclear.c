#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	t_list *content;
	struct node *next;
}				t_list;

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	while (*lst)
	{
		temp = (*lst) -> next; 
		del(*lst) -> content;
		free (*lst);
		*lst = temp;
	}
}
