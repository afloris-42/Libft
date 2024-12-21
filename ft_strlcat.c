/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:00 by afloris           #+#    #+#             */
/*   Updated: 2024/12/21 16:08:17 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	srcsize;

	i = 0;
	j = 0;
	srcsie = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	while (src[l] && (i + l + 1) < size)
	{
		dst[i + j] = src[l];
		l++;
	}
	if (i < size)
		dst [i + l] = '\0';
	return (i + srcsize);
}

/*int	main(void)
{
	char	str1[50] = "Hello, ";
	char	*str2 = "world!";
	size_t result = ft_strlcat (str1, str2, sizeof(str1));

	printf ("Dst to src is: %s\n", str1);
	printf ("Resulting string is: %zu\n", result);
	return (0);
}*/
