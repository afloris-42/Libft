/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:00 by afloris           #+#    #+#             */
/*   Updated: 2024/12/20 20:06:50 by babyf            ###   ########.fr       */
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

	while (dstsize < i)

	lenght = dstsize + srcsize;
	return (lenght);
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
