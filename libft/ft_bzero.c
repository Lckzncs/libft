/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:56:23 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 10:57:34 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
/*
#include <stdio.h>
int main() 
{
    char str[] = "Olá, mundo!";
    printf("Antes de zerar: %s\n", str);

    ft_bzero(str, 10); // Zera os primeiros 10 caracteres da string

    printf("Depois de zerar: %s\n", str);

    return 0;
}
*/
