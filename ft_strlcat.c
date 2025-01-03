/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:33:00 by afloris           #+#    #+#             */
/*   Updated: 2025/01/03 16:02:29 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
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
		dst[i + l] = '\0';
	return (i + srcsize);
}
