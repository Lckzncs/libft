/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:20:21 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:20:59 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
int main() 
{
    char c = 'A';
    int minusculo = ft_tolower(c);
    printf("%c", minusculo);
    return (0);
}
*/
