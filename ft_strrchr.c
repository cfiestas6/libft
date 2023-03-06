/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:03:21 by cfiestas          #+#    #+#             */
/*   Updated: 2023/01/12 18:45:43 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*a;
	char	b;
	char	*result;

	i = 0;
	a = (char *) s;
	b = (char) c;
	len = ft_strlen(a);
	result = 0;
	while (i <= len)
	{
		if (a[i] == b)
			result = &a[i];
		i++;
	}
	return (result);
}
