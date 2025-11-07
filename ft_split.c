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

int ft_getcnt(char *s, char c)
{
	int i;

	i = 0;
	while(*s)
	{
		if(*s == c)
		{
			i++;
		}
		s++;
	}
	return (i);
}
int ft_getidx(char *s, char c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			return i;
		}
		i++;
	}
	return -1;
}
//nono........ split can make multiple char arrays.... not just two

char	**ft_split(char const *s, char c)
{
	char **src;
	char *s1;
	char *s2;
	int idx;
	int i;
	int slen;
	char *tmp;

	tmp = (char *)s;
	i = 0;
	slen = ft_strlen(tmp);
	idx = ft_getidx(tmp, c);
	s1 = (char *)malloc(sizeof(char) * (idx + 1));
	s2 = (char *)malloc(sizeof(char) * (slen - idx));
	src = (char **)malloc(sizeof(char *) * ft_getcnt(tmp, c));
	if(idx < 0)
		return 0;
	while(i < idx)
	{
		s1[i] = tmp[i];
		i++;
	}
	i = 0;
	while(i < slen - idx)
	{
		s2[i] = tmp[slen - idx + 1];
		i++;
	}
	return src;
}
