/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:21:43 by afloris           #+#    #+#             */
/*   Updated: 2024/12/21 15:48:13 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		*l_occurence;

	s2 = s;
	last_occurence = NULL;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (s-- > s2)
	{
		if (*s == c)
			return (l_occurence = (char *) s);
	}
	return (l_occurence);
}

/*int	main (void)
{
	char	str1[] = "Hello world";
	char	c = 'o';
	
	char *pos = ft_strrchr (str1, c);

	if (pos)
	{
		printf("Last occurence of %c in %s is at %ld", c, str1, pos - str1);
	}
	return (0);
}*/
