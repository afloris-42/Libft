#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}              t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
    {
        return;
    }
    new -> next = *lst; 
    *lst = new;
}