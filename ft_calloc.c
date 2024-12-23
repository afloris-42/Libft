/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:28:25 by afloris           #+#    #+#             */
/*   Updated: 2024/12/23 12:34:23 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*byte_ptr;
	size_t			tot_size;
	size_t			i;
	void			*ptr;

	tot_size = count * size;
	ptr = malloc(tot_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < tot_size)
	{
		byte_ptr [i] = 0;
		i++;
	}
	return (ptr);
}
