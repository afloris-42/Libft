/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:00 by afloris           #+#    #+#             */
/*   Updated: 2025/01/02 16:24:54 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	srcsize;

	i = 0;
	l = 0;
	srcsize = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	while (src[l] && (i + l + 1) < dstsize)
	{
		dst[i + l] = src[l];
		l++;
	}
	if (i < dstsize)
		dst [i + l] = '\0';
	return (i + srcsize);
}
