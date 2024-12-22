#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t tot_size = count * size;
    void *ptr = malloc(tot_size);
    if (ptr == NULL) 
    {
        return (NULL);
    }

    unsigned char *byte_ptr = (unsigned char *)ptr;
    size_t i; 

    i = 0; 
    while (i < tot_size) 
    {
        byte_ptr [i] = 0;
        i++;
    }
    return (ptr);
}