/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:54:25 by afloris           #+#    #+#             */
/*   Updated: 2025/01/02 11:51:11 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

void	my_free(char **str, size_t i)
{
	while (i > 0)
	{
		free (str[--i]);
	}
	free (str);
}

char	*skip_char(char *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	*start; 
	char	**str;
	size_t	word_count; 
	int		i;
	int		j;

	word_count = ft_countwords(s, c);
	if (!s || !(str = malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (word_count-- > 0)
	{
		s = skip_char((char *)s, c);
		start = (char *)s;
		while (*s != c && *s)
			s++;
		if (!(str[i] = (char *)malloc((s - start + 1) * sizeof(char))))
		{
			my_free(str, i);
			return (NULL);
		}
		j = 0;
		while (start < s)
			str[i][j++] = *start++;
		str[i++][j] = '\0';
	}
	str[i] = NULL;
	return (str);
}
int main() 
{
    char str[] = "Hello World! This is a test.";
    char delimiter = ' ';

    char **result = ft_split(str, delimiter);
    if (result) 
    {
        int i = 0;
        while (result[i]) 
        {
            printf("Substring[%d]: %s\n", i, result[i]);
            i++;
        }
        i = 0;
        while (result[i]) 
        {
            free(result[i]);
            i++;
        }
        free(result);
    } else 
    {
        printf("Error: Could not split the string.\n");
    }
    return (0);
}