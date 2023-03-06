/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:55:20 by cfiestas          #+#    #+#             */
/*   Updated: 2023/01/11 18:36:34 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;
	unsigned char	b;

	a = (unsigned char *) s;
	b = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (0);
}
