/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:14 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 10:55:33 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\f'
		|| *str == '\r' || *str == '\n' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - '0');
	return (sign * num);
}
/*
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
    const char	*str1 = "123";
    const char	*str2 = "abc";
    const char	*str3 = "123abc";
    const char	*str4 = "-123";
    const char	*str5 = "+123";

    printf("Testando ft_atoi...\n");

    printf("str1: %s -> %d\n", str1, ft_atoi(str1));
    printf("str2: %s -> %d\n", str2, ft_atoi(str2));
    printf("str3: %s -> %d\n", str3, ft_atoi(str3));
    printf("str4: %s -> %d\n", str4, ft_atoi(str4));
    printf("str5: %s -> %d\n", str5, ft_atoi(str5));

    return (0);
}
*/
