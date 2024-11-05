/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:07:34 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:10:10 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		len;
	char		*d;
	const char	*s;

	s = src;
	len = 0;
	d = dst;
	if (size > 0)
	{
		while (*s && len < size - 1)
		{
			*d++ = *s;
			s++;
			len++;
		}
		*d = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main () 
{
    char src[] = "Hola, mundo!";
    char dst[20];

    printf("Origen: %s\n", src);

    size_t len = ft_strlcpy(dst, src, 13);

    printf("Destino: %s\n", dst);
    printf("Longitud: %zu\n", len);

    return 0;
}
*/
