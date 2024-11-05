/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:02:28 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:02:59 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a != '\0')
	{
		if (*a == (char)c)
		{
			return (a);
		}
		a++;
	}
	if (c == '\0')
		return (a);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char str[] = "Brasil";
	const char	count = 'r';
	const	char *ret = ft_strchr(str, count);

	printf("String after |%c| is %s\n", count, ret);
	return (0);
}
*/
