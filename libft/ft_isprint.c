/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:47:29 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:02:05 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int main()
{
    char c = 'z';

    if (ft_isprint(c))
        printf("El carácter '%c' es imprimible.\n", c);
    else
        printf("El carácter '%c' no es imprimible.\n", c);

    return 0;
}
*/
