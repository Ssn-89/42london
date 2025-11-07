/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:55:47 by sunson            #+#    #+#             */
/*   Updated: 2025/11/07 12:02:31 by sunson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_isalpha()
{
	printf("*test isalpha\n");
	printf("result : %d ", ft_isalpha(107));
	printf("\n");
	return;
}
void test_isdigit()
{
	printf("*test isdigit\n");
    printf("result : %d ", ft_isdigit(7));
    printf("\n");
    return;
}
void test_strtrim()
{
	printf("*test strtrim\n");
	printf("%s", ft_strtrim("abcdef", "ae"));
	printf("\n");
	return;
}
// void test_ft_substr()
// {
// 	printf("*test ft_substr\n");
// 	printf("%s", ft_substr("abcdef", 2,2));
// 	printf("\n");
// 	return;
// }
void test_ft_strjoin()
{
	printf("*test ft_strjoin\n");
	printf("%s", ft_strjoin("nice", "tomeetyou"));
	printf("\n");
	return;
}

void test_ft_putnbr_fd()
{
	printf("*test_ft_putnbr_fd\n");
	ft_putnbr_fd(-123,1);
	printf("\n");
	ft_putnbr_fd(-2147483648,1);
	printf("\n");
	ft_putnbr_fd(4,1);
	printf("\n");
	return;
}
void test_ft_putchar_fd()
{
	printf("*test_ft_putchar_fd\n");
	ft_putchar_fd('c',1);
	printf("\n");
	return;
}
void test_ft_putstr_fd()
{
	printf("*test_ft_putstr_fd\n");
	ft_putstr_fd("hihihi",1);
	printf("\n");
	return;
}
void test_ft_putendl_fd()
{
	printf("*test_ft_putendl_fd\n");
	ft_putstr_fd("bye",1);
	printf("\n");
	return;
}
int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_strtrim();
	test_ft_putnbr_fd();	
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	//test_ft_substr();
	test_ft_strjoin();
	return 0;
}
