#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content; 
	struct node *next;
}				t_list;

int	ft_lstsize(t_list *lst)
{
	int		len;
	len = 0; 
	while (lst != NULL)
	{
		len++;
		lst = lst -> next;
	}
	return (len);
}