#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	t_list *content;
	struct node *next;
}				t_list;

void	ft_lsiter(t_list *lst, void (*f)(void *f))
{
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
