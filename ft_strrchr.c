/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:21:43 by afloris           #+#    #+#             */
/*   Updated: 2024/12/23 12:13:34 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s2;
	char		*l_occurence;

	s2 = s;
	l_occurence = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			l_occurrence = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (l_occurence);
}
