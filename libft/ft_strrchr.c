/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:14:02 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:14:33 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	char	*last;

	last = NULL;
	a = (char *)s;
	while (*a != '\0')
	{
		if (*a == (char)c)
		{
			last = a;
		}
		a++;
	}
	if (c == '\0')
	{
		return (a);
	}
	return (last);
}
/*
#include <stdio.h>
int main () 
{
   const char str[] = "https://www.Brasil.com.br";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return (0);
}
*/
