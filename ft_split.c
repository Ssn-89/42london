/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:54:12 by sunson            #+#    #+#             */
/*   Updated: 2025/11/06 19:41:37 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	word_cnt(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			cnt++;
			while (*str != c && *str)
				str++;
		}
	}
	return (cnt);
}

int	addword(char const *str, char c, char **result, int i)
{
	const char	*start;
	int			len;

	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			start = str;
			while (*str != c && *str)
				str++;
			len = str - start;
			result[i] = malloc(len + 1);
			if (!result[i])
			{
				free_all(result);
				return (-1);
			}
			ft_strlcpy((char *)result[i++], start, len + 1);
		}
	}
	result[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**src;

	if (!s)
		return (NULL);
	src = (char **)malloc((word_cnt(s, c) + 1) * sizeof(char *));
	if (!src)
		return (NULL);
	if ((addword(s, c, src, 0)) == -1)
	{
		return (NULL);
	}
	return (src);
}
// char	**src;
	// int		i;
	// int		words;
	// int		len;

	// words = ft_getcnt((char *)s, c);
	// src = malloc(sizeof(char *) * (words + 1));
	// if (!src)
	// 	return (NULL);
	// i = 0;
	// while (*s)
	// {
	// 	while (*s == c)
	// 		s++;
	// 	if (*s)
	// 	{
	// 		len = ft_getwordlen((char *)s, c);
	// 		src[i] = malloc(len + 1);
	// 		if (!src[i])
	// 			return (free_all(src, i));
	// 		ft_strlcpy(src[i++], s, len + 1);
	// 		s += len;
	// 	}
	// }
	// src[i] = NULL;
	// return (src);
