/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:43:10 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:01:27 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
    char c = '7';

    if (ft_isdigit(c))
        printf("O caractere '%c' é um dígito.\n", c);
    else
        printf("O caractere '%c' não é um dígito.\n", c);

    return 0;
}
*/
