/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:41:28 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:42:49 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*z;

	z = s;
	while (n--)
	{
		*z = (unsigned char)c;
		z++;
	}
	return (s);
}
/*
#include <stdio.h>
int main() 
{
    char buffer[10];
    ft_memset(buffer, 0, 10); // Inicializa o buffer com zeros
    printf("Buffer antes de memset: %s\n", buffer);

    ft_memset(buffer, 'A', 7);
    printf("Buffer após memset: %s\n", buffer);

    return 0;
}
*/
