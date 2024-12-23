/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:52:08 by afloris           #+#    #+#             */
/*   Updated: 2024/12/23 14:46:39 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(char *s, int n)
{
	int	count;

	if (n == 0)
		return (1);
	
	count = 0; 
	while (n < 0)
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

int	ft_isneg(int n)
{
	if (n < 0) 
	{
        n = -n;
    }
	return (n);
}

char	*ft_itoa(int n)
{
	int	nb_digit; 
	int	neg; 
	char	*s;

	nb_digit = count_digit (n); //can you?? 
	neg = ft_isneg;
	s = malloc(nb_digit + 1);

	if (!s)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0'; 
		s[1] = '\0';
		return (s);
	}
	//if int is negative

}
