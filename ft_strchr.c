/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:13:05 by cfiestas          #+#    #+#             */
/*   Updated: 2023/01/27 12:48:51 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*a;
	char	b;
	size_t	len;

	i = 0;
	a = (char *) s;
	len = ft_strlen(a);
	b = (char) c;
	while (i <= len)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (0);
}
