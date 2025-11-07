/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:56:15 by sunson            #+#    #+#             */
/*   Updated: 2025/11/07 16:15:03 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*src;
	int		i;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	src = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!src)
		return (NULL);
	while (i < len1)
	{
		src[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		src[i + len1] = s2[i];
		i++;
	}
	src[i + len1] = '\0';
	return (src);
}
