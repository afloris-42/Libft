//include "libft.h"
/*#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>*/

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s3; 
    size_t  i;
    size_t  j;
    size_t  size;

    if (!s1 || !s2)
        return (NULL);
    size = ft_strlen (s1) + ft_strlen (s2); //change
    s3 = (char *)malloc(i + 1);

    if (!s3)
        return (NULL);
    
    i = 0; 
    while (s1[i])
    {
        s3[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        s3[i + j] = s2[j];
        j++;
    }
    s3 [i + j] = '\0';
    return (s3);
}