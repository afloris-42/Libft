#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void    	*content;
    struct node	*next;
}				t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
