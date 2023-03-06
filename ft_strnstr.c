/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:59:30 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 16:59:47 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;	
	size_t	j;
	char	*str;
	char	*to_find;

	i = 0;
	if (!haystack && !len)
		return (0);
	str = (char *) haystack;
	to_find = (char *) needle;
	if (!to_find[0])
		return (str);
	while (str[i] && i < len && haystack[0])
	{
		j = 0;
		while ((i + j < len) && to_find[j] == str[i + j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
