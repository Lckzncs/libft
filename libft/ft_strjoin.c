/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:04:48 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:05:29 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*z;
	size_t	s_len;
	size_t	s_len2;

	if ((char *)s1 == NULL || (char *)s2 == NULL)
	{
		return (NULL);
	}
	s_len = ft_strlen(s1);
	s_len2 = ft_strlen(s2);
	z = malloc(s_len + s_len2 + 1);
	if (z == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(z, s1, s_len +1);
	ft_strlcpy(z + s_len, s2, s_len2 +1);
	z[s_len + s_len2] = '\0';
	return (z);
}
/*
#include <stdio.h>
int main() 
{
    char *s1 = "Ola ";
    char *s2 = "Brasil";
    char *str;

    str = ft_strjoin(s1, s2);

    if (str == NULL)
    {
        printf("Error: memoria no disponible");
        return 1;
    }

    printf("%s\n", str);
    free(str);

    return 0;
}
*/
