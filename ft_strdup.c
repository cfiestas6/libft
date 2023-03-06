/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:44:20 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 16:57:14 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *) malloc(len + 1);
	if (!s2)
		return (0);
	while (i <= len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
