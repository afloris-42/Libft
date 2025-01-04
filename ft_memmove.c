/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:39:39 by afloris           #+#    #+#             */
/*   Updated: 2025/01/04 15:15:44 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (!dst || !src)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (tmp_dst < tmp_src)
	{
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		tmp_dst += len;
		tmp_src += len;
		while (len--)
			*(--tmp_dst) = *(--tmp_src);
	}
	return (dst);
}
