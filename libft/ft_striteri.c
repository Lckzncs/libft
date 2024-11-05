/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:04:11 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:04:26 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
	return ;
}
/*
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar_new(unsigned int index, char *c)
{
    ft_putchar(*c);
}

int main()
{
    char str[] = "Hola";
    ft_striteri(str, ft_putchar_new);
    return 0;
}
*/
