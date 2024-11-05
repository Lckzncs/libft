/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:14:50 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:17:16 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	int		s;
	int		e;
	int		len;

	if ((char *)s1 == NULL || (char *)set == NULL)
		return (NULL);
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	e = ft_strlen(s1) - 1;
	while (e > s && ft_strchr(set, s1[e]))
		e--;
	len = e - s + 1;
	r = (char *)malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(r, s1 + s, len + 1);
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
    char	*str = "   Hello, Brasil!   ";
    char	*set = " ";

    printf("Original string: %s\n", str);
    char	*trimmed = ft_strtrim(str, set);
    printf("Trimmed string: %s\n", trimmed);
    return (0);
}
*/
