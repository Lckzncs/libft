/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:12:49 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:13:33 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big || !little || (len == 0 && *little != '\0'))
		return (NULL);
	if (len > 0 && ft_strlen(little) > len)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*big == *little)
		{
			i = 0;
			while (i < len && big[i] == little[i])
				i++;
			if (i == ft_strlen(little))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main () 
{
   const char str[20] = "Brasilbr";
   const char substr[10] = "asil";
   char *ret;
   
   // strstr(main_string, substring)
   ret = ft_strnstr(str, substr, 10);
   
   // Display the output
   printf("The substring is: %c\n", ret[0]);
   
   return(0);
}
*/
