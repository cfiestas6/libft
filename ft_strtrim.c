/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:45:49 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 17:01:18 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_check(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_first(char const *s1, char const *set)
{
	int	i;
	int	index;

	i = 0;
	if (!ft_check(s1[0], set))
		return (0);
	while (s1[i] && ft_check(s1[i], set))
		index = i++;
	return (index + 1);
}

static int	ft_last(char const *s1, char const *set)
{
	int		len;
	int		index;

	len = (int) ft_strlen(s1) - 1;
	if (!ft_check(s1[len], set))
		return (len);
	while (len && ft_check(s1[len], set))
	{
		index = len;
		len--;
	}
	return (index - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*trimmed;

	if (!s1 || !set)
		return (0);
	first = ft_first(s1, set);
	last = ft_last(s1, set) - 1;
	if (!s1[last] || !s1[first])
	{
		trimmed = (char *) malloc(1);
		if (!trimmed)
			return (0);
		trimmed[0] = '\0';
	}
	else
	{
		trimmed = ft_substr(s1, first, last - first + 2);
	}
	return (trimmed);
}
/*
int main()
{
	char *set = " ";
	char *s = " ";

	printf("\n result from ft_last: %d\n", ft_last(s, set));
	printf("\n result from ft_first: %d\n", ft_first(s, set));
	printf("\nresult: %s\n\n", ft_strtrim(s, set));
	return (0);
}*/
