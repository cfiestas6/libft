/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:47:27 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 13:21:44 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

static void	ft_is_negative(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

static int	ft_get_digits(int n, int digits)
{
	n /= 10;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*ft_maxmin(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 2147483647)
		return (ft_strdup("2147483647"));
	return (0);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		digits;
	int		neg;
	int		temp;

	temp = (long int) n;
	if (n == -2147483648 || n == 2147483647)
		return (ft_maxmin(n));
	digits = 2;
	neg = 0;
	ft_is_negative(&n, &neg);
	digits = ft_get_digits(temp, digits) + neg;
	s = (char *) malloc(digits);
	if (!s)
		return (0);
	s[--digits] = '\0';
	while (digits--)
	{
		s[digits] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
