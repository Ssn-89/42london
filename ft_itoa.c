/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:17:22 by sunson            #+#    #+#             */
/*   Updated: 2025/11/07 12:19:05 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	long	num;
	int		len;

	len = 0;
	num = n;
	if (num <= 0)
		len++;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*src;
	long	num;
	int		len;

	num = n;
	len = ft_numlen(n);
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	src[len] = '\0';
	if (num == 0)
		return (src[0] = '0', src);
	if (num < 0)
	{
		src[0] = '-';
		num = -num;
	}
	while (num)
	{
		src[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (src);
}
