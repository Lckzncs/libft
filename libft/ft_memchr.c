/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:38:00 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:38:27 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr( const void *s, int c, size_t n)
{
	char	*a;
	char	b;

	b = (char)c;
	a = (char *)s;
	while (n--)
	{
		if (*a == b)
		{
			return (a);
		}
		a++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "brasil.com.br";
   const char ch = '.';
   char *ret;
   ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}
*/
