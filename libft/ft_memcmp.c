/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:38:51 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:38:52 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st;
	unsigned char	*st2;
	size_t			i;

	st = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (st[i] != st2[i])
			return (st[i] - st2[i]);
		i++;
	}
	return (0);
}
/*
int main() 
{
   char str1[] = "12345";
   char str2[] = "12345";

   int result = ft_memcmp(str1, str2, 6);

   if (result < 0) {
       printf("First is less than second.\n");
   } else if (result == 0) {
       printf("First is equal to second.\n");
   } else {
       printf("First is greater than second.\n");
   }
    return 0;
}
*/
