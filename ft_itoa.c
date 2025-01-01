/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:52:08 by afloris           #+#    #+#             */
/*   Updated: 2025/01/01 16:18:43 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	is_neg(int n, char *s)
{
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
}

char	*ft_itoa(int n)
{
	int	nb_digit;
	char	*s;

	if (n == -2147483648)
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
	is_neg(nb_digit, s);
	while (n > 0)
		{
			s[--nb_digit] = (n % 10) + '0';
			n /= 10;
		}
		return (s);
}
