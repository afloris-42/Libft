#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	t_list *content;
	struct node *next;
}				t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	if (new == NULL)
    {
        return;
    }
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		*last = *lst;
		while (last -> next != NULL)
		{
			last = last -> next;
		}
		last -> next = new;
		*lst = new;
	}
    new -> next = NULL;
}
