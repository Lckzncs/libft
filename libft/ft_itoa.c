/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:03:41 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:17:09 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_handle_overflow(int n)
{
	char	*s;

	if (n < -2147483647)
	{
		s = malloc(12);
		ft_strlcpy(s, "-2147483648", 12);
		return (s);
	}
	return (NULL);
}

int	ft_count_digits(int n)
{
	int		temp;
	int		digits;

	if (n < 0)
		temp = -n;
	else
		temp = n;
	digits = 0;
	while (temp != 0)
	{
		digits++;
		temp = temp / 10;
	}
	return (digits);
}

char	*ft_convert_to_string(int n, int digits, int is_negative)
{
	char	*str;
	int		i;
	int		temp;

	if (n < 0)
		temp = -n;
	else
		temp = n;
	i = digits - 1;
	str = malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	while (temp != 0)
	{
		str[i--] = (temp % 10) + '0';
		temp = temp / 10;
	}
	str[digits] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*overflow;
	int		is_negative;
	int		digits;

	overflow = ft_handle_overflow(n);
	if (overflow)
		return (overflow);
	if (n == 0)
		return (ft_strdup("0"));
	is_negative = (n < 0);
	digits = ft_count_digits(n);
	if (is_negative)
	{
		digits++;
	}
	return (ft_convert_to_string(n, digits, is_negative));
}
/*
#include <stdio.h>
int main()
{
    int num;
    char* str;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    str = ft_itoa(num);

    printf("Número convertido em string: %s\n", str);

    free(str);

    return 0;
}
*/
