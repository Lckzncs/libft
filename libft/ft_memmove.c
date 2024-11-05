/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:40:45 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:40:58 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*o;
	size_t				i;

	d = (unsigned char *)dst;
	o = (unsigned char *)src;
	if (dst == src || n == 0)
		return (dst);
	if (src < dst)
	{
		i = n;
		while (i-- > 0)
		{
			d[i] = o[i];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (d);
}
/*
#include <stdio.h>
int main() 
{
    char src[] = "Brasil";
    printf("Origen: %s\n", src);
	printf("Origen: %s\n", (char *)ft_memmove(src, src,1));
    return 0;
}
*/
