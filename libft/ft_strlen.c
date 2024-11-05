/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:51:12 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/07/29 13:17:29 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/*
#include <stdio.h>
int main()
{
    char cadena[] = "E o Brasa";
    size_t longitud;

    longitud = ft_strlen(cadena);
    printf("La longitud de la cadena es: %zu\n", longitud);

    return 0;
}
*/
