/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:39:39 by afloris           #+#    #+#             */
/*   Updated: 2024/12/21 16:18:50 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if (!dst || !src)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i++ < len)
			tmp_dst[i] = tmp_src[i];
	}
	return (dst);
}
