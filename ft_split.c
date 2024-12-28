/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:54:25 by afloris           #+#    #+#             */
/*   Updated: 2024/12/28 17:57:03 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.>
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
	return (count)
}

char	skip_char(char *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t 			i;

	if (!s)
		return (NULL);

	word_count = count_word(s, c);
	result = (char **)malooc((word_count + 1) * sizeof(char *));
