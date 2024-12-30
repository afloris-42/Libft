/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:54:25 by afloris           #+#    #+#             */
/*   Updated: 2024/12/30 17:26:39 by babyf            ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	*start; 
	char	**str;
	size_t	word_count; 
	size_t	i;
	size_t	j;

	word_count = ft_countwords(s, c);
	if (!s || !(str =malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (word_count-- > 0)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s != c && *s)
			s++;
		str[i] = (char *)malloc((s - start + 1) * sizeof (char));
		if (!(str[i] = (char *)malloc((s - start + 1) * sizeof(char))))
		{
			my_free(str, i);
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
