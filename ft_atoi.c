/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:02:36 by sunson            #+#    #+#             */
/*   Updated: 2025/11/06 16:26:17 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isblank(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *src)
{
	int	i;
	int	minus;
	int	answer;

	i = 0;
	minus = 1;
	answer = 0;
	while (ft_isblank(src[i]))
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_isdigit(src[i]))
	{
		answer = answer * 10 + (src[i] - '0');
		i++;
	}
	return (minus * answer);
}
