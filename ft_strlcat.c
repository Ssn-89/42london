/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:10:00 by sunson            #+#    #+#             */
/*   Updated: 2025/11/07 15:58:30 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	
	if (!dest && n == 0)
		return (ft_strlen((char *)src));
	srclen = ft_strlen((char *)src);
	destlen = ft_strlen(dest);
	i = 0;
	if (n <= destlen)
		return (n + srclen);
	while (src[i] && destlen + i < n - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
