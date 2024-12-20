/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:00 by afloris           #+#    #+#             */
/*   Updated: 2024/12/20 12:30:02 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	lenght;
	size_t	srcsize;

	dstsize = sizeof (dst);
	srcsize = sizeof (src);

	if (dstsize < i)

	/*if (!src || !*src)
	{

	}*/
	lenght = dstsize + srcsize;
	return (lenght);
}

int	main(void)
{
	char	str1[50] = "Hello, ";
	char	str2[] = "world!";

	printf ("Dst to src is: %zu\n", ft_strlcat(str1, str2, 40));
	return (0);
}
