#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2; 
	size_t	i; 
	size_t	j;
	
	s2 = (char *)malloc(len + 1);

	if (!s || !s2)
		return (NULL); 
	i = start; 
	j = 0; 
	while (i < ft_strlen(s) && j < len)
	{
		s2[j++] = s[i++];
	}
	s2[j] = '\0';
	return (s2);
}