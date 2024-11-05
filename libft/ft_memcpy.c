/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:39:19 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:40:11 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*src_for_char;

	src_for_char = (char *)src;
	s = dest;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
	{
		*s = *src_for_char;
		src_for_char++;
		s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main() 
{
    int origem[] = {1, 2, 3, 4, 5};
    int destino[5];
    int i = 0;

    printf("Origem: ");
    while(i < 5) {
        printf("%d ", origem[i]);
        i++;
    }
    printf("\n");

    ft_memcpy(destino, origem, sizeof(origem));

    i = 0;
    printf("Destino: ");
    while(i < 5) {
        printf("%d ", destino[i]);
        i++;
    }
    printf("\n");

    return 0;
}
*/
