/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:55:28 by cfiestas          #+#    #+#             */
/*   Updated: 2023/02/10 13:19:11 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

static char	**ft_free(char **result, int j)
{
	free(result[j]);
	while (j-- > 0)
		free(result[j]);
	free(result);
	return (0);
}

static void	ft_headache(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

static char	**ft_pain(char **result, int j)
{
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = (char **) malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	ft_headache(&i, &j);
	while (j < ft_count_words(s, c) && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start < i)
		{
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
				return (ft_free(result, j));
			j++;
		}
	}
	return (ft_pain(result, j));
}
//
// int main()
// {
// 	char *str = "hello!";
// 	char c = ',';
// 	char **result = ft_split(str, c);
// 	
// 	printf("words = %d\n", ft_count_words(str, c));
//
// 	for (int i = 0; result[i]; i++)
// 	{
// 		printf("%s\n", result[i]);
// 	}
// 	return (0);
// }
