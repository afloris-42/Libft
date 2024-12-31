#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	t_list *content;
	struct node *next;
}				t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return; 
	del(lst -> content);
	free(lst);
}
