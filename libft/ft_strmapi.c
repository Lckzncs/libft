/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:11:27 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:12:08 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*z;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len] != '\0')
		len++;
	z = malloc(len + 1);
	if (!z)
		return (NULL);
	while (i < len)
	{
		z[i] = f(i, s[i]);
		i++;
	}
	z[i] = '\0';
	return ((char *)(z));
}
/*
char toupper_new(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

#include <stdio.h>
int main()
{
    char *str = "Hola, mundo!";
    char *new_str = ft_strmapi(str, toupper_new);
    printf("%s\n", new_str);
    free(new_str);
    return 0;
}
*/
