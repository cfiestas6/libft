/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:21:17 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 16:58:11 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stddef.h>

static size_t	ft_getindex(size_t s1_len, char *r, char const *s1)
{
	size_t	i;

	i = 0;
	while (i < s1_len)
	{
		r[i] = s1[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*r;
	size_t	i;
	size_t	k;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	r = (char *) malloc(s1_len + s2_len + 1);
	if (!r)
		return (0);
	k = 0;
	i = ft_getindex(s1_len, r, s1);
	while (k < s2_len)
	{
		r[i] = s2[k];
		i++;
		k++;
	}
	r[i] = '\0';
	return (r);
}
