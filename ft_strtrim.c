/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:07:26 by sunson            #+#    #+#             */
/*   Updated: 2025/11/06 19:34:27 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstartidx(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if(s1[i] == s2[j])
				break;
			j++;
		}
		if (!s2[j])
			return (i);
		i++;
	}
	return (i);
}

int ft_getendidx(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int len;

	len = ft_strlen(s1);	
	i = len - 1;
	while (1 >= 0)
	{
		j = 0;
		while (s2[i] != '\0')
		{
			if (s1[i] == s2[j])
				break;
			j++;
		}
		if (!s2[j])
			return (i);
		i--;
	}
	return -1;
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char *src;
	int	startidx;
	int endidx;
	int len;
	int	i;

	if (!s1 || !set)
		return (NULL);
	startidx = ft_getstartidx(s1, set);
	endidx = ft_getendidx(s1, set);
	if (endidx < startidx)
		len = 0;
	else
		len = endidx - startidx + 1;
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		src[i] = s1[startidx + i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
