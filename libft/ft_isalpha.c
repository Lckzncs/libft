/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:45:19 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:00:07 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
    char c = 'a';
    printf("O caractere '%c' é alfabético? %d\n", c, ft_isalpha(c));

    c = 'A';
    printf("O caractere '%c' é alfabético? %d\n", c, ft_isalpha(c));

    c = '1';
    printf("O caractere '%c' é alfabético? %d\n", c, ft_isalpha(c));

    c = '!';
    printf("O caractere '%c' é alfabético? %d\n", c, ft_isalpha(c));

    return 0;
}
*/
