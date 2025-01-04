/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:39:39 by afloris           #+#    #+#             */
/*   Updated: 2025/01/04 12:11:52 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	i = 0;
	if (tmp_dst < tmp_src)
	{
		while (i < len)
			tmp_dst[i] = tmp_src[i];
		i++;
	}
	else if (tmp_dst > tmp_src)
	{
		i = len;
		while (i > len)
		{
			i--;
			tmp_dst[i] = tmp_src[i];
		}
	}
	return (dst);
}
