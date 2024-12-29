/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:52:08 by afloris           #+#    #+#             */
/*   Updated: 2024/12/29 19:13:39 by babyf            ###   ########.fr       */
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

	if (n == INT_MIN)
		return ("-2147483648");

	nb_digit = count_digit (n);
	s = (char *)malloc((nb_digit + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	
	s[nb_digit] = '\0';
	if (n == 0)
	{
		s[0] = '0';
	}
	else 
	{
		while (n > 0)
		{
			s[--nb_digit] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (s);
}

int	main (void)
{
	int	i = 2147483647;

	printf ("S is: %s", ft_itoa(i));
	return (0);
}
