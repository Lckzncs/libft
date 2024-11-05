/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:42:23 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:00:49 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
    char c = 'Z';

    if (ft_isascii(c))
        printf("O caractere '%c' é ASCII.\n", c);
    else
        printf("O caractere '%c' não é ASCII.\n", c);

    return 0;
}
*/
