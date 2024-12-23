/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:52:08 by afloris           #+#    #+#             */
/*   Updated: 2024/12/23 16:40:04 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_digit(int n)
{
	int	count;

	if (n == 0)
		return (1);
	
	count = 0; 
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != '\0')
	{
		n /= 10;
		count++;
	}
	return (count);
}



char	*ft_itoa(int n)
{
	int	nb_digit;
	char	*s;

	nb_digit = count_digit (n);
	s = (char *)malloc((nb_digit + 1) * sizeof(char));

	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (!s)
		return (NULL);
	s[nb_digit] = '\0';
	while (n > 0)
	{
		s[--nb_digit] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}

int	main (void)
{
	int	i = 2147483647;

	printf ("S is: %s", ft_itoa(i));
	return (0);
}
