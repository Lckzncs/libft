/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:05:47 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:07:20 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = len_dst;
	while (*src && i < size - 1)
	{
		dst[i++] = *src++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
int main()
{
    char dst[20] = "ola";
    char src[] = "Brasil";
    size_t size = 20;

    size_t length = ft_strlcat(dst, src, size);

    printf("Resultado: %s\n", dst);
    printf("Longitud: %zu\n", length);

    return 0;
}
*/
