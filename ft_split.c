/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:54:25 by afloris           #+#    #+#             */
/*   Updated: 2024/12/29 16:46:13 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static size_t	count_words (const char *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
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

char	skip_char(char *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

void	my_free(char **str, size_t i)
{
	while (i > 0)
	{
		free (str[--i]);
	}
	free (str);
}

char	ft_cpy(char **str, size_t k, size_t j)
{

}

char	**ft_split(char const *s, char c)
{
	char	*start; 
	char	**str;
	size_t	word_count; 
	size_t	i;
	size_t	j;

	word_count = count_words(s, c);
	i = 0;
	str = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (word_count-- > 0)
	{
		s = skip_char((char *)s, c);
		start = (char *)s;
		while (*s != c && *s)
			s++;
		str[i] = (char *)malloc((s - start + 1) * sizeof (char));
		if (!str[i])
		{
			my_free(str, i);s
			return (NULL);
		}
		j = 0;
		while (start < s)
			str[i][j++] = *start++; 
		str[i++][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}