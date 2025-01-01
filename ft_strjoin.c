/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:20:52 by afloris           #+#    #+#             */
/*   Updated: 2025/01/01 17:45:50 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char		*res; 
    size_t		i;
    size_t		j;
    size_t		size;

    if (!s1 || !s2)
        return (NULL);
    size = ft_strlen (s1) + ft_strlen (s2); //change
    res = (char *)malloc(size + 1);
    if (!res)
        return (NULL);
    i = 0; 
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
	j = 0;
    while (s2[j])
    {
        res[i + j] = s2[j];
        j++;
    }
    res[i + j] = '\0';
    return (res);
}
