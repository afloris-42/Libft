/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:10 by afloris           #+#    #+#             */
/*   Updated: 2024/12/20 21:55:31 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i; 
	char *char_dst; 
	char *char_src;

	i = 0; 
	char_dst = (char *)dst; 
	char_src = (char *)src; 
	if (dst == NULL)
		return (NULL);
	
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}