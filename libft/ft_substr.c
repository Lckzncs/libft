/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:17:32 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:19:40 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*z;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		z = malloc(1);
		if (z == NULL)
			return (NULL);
		z[0] = '\0';
		return (z);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	z = malloc(len + 1);
	if (z == NULL)
		return (NULL);
	ft_strlcpy(z, (s + start), (len + 1));
	return (z);
}
/*
#include <stdio.h>
int main()
{
    char *s = "Hello, World!";
    char *substr;

    substr = ft_substr(s, 4, 6);
    printf("%s\n", substr);
    free(substr);

    return 0;
}
*/
