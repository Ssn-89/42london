/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:06:07 by sunson            #+#    #+#             */
/*   Updated: 2025/11/07 16:13:33 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_getlen(char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '0')
	{
		i++;
	}
	return (i);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;

	src2 = (char *)src;
	dest2 = (char *)dest;
	if (src2 < dest2)
	{
		while (n--)
			dest2[n] = src2[n];
	}
	else
		ft_memcpy(dest2, src2, n);
	return (dest);
}
