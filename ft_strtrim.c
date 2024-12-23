//include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{   
    size_t  len;
    size_t  end;
    size_t  start;
    char    *trims1;
    
    if (!s1 || ! set)
        return (NULL);
    start = 0; 
    while (s1[start] && ft_strchr(set, s1[start])) 
		start++;
	end = ft_strlen(s1); 
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
    len = end - start; 
	trims1 = (char *)malloc(len + 1);
	if (!trims1)
        return (NULL);
    ft_strlcpy (trims1, s1 + start, len + 1); 
	return (trims1);
}