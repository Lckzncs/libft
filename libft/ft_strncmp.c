/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:12:27 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:12:29 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	while (n --)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		a++;
		b++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main() 
{  
   char str_1[] = "Brasil";  
   char str_2[] = "Brazil";      
   if (ft_strncmp(str_1, str_2, ft_strlen(str_2)) == 0) 
   {  
      printf("The strings '%s' and '%s' are equal.\n", str_1, str_2);  
   }  
   else 
   {  
      printf("The strings '%s' and '%s' are not equal.\n", str_1, str_2);  
   }  
   return 0;  
}
*/
/*
int main () 
{
   char str1[15];
   char str2[15];
   int ret;
   strcpy(str1, "abcdef");
   strcpy(str2, "abcdef");

    ret = ft_strncmp(str1, str2, 6);
	if(ret < 0) 
	{
	printf("str1 is less than str2");
	} 
	else if(ret > 0) 
	{
	printf("str2 is less than str1");
	} 
	else 
	{
   printf("str1 is equal to str2");
	}
   return(0);
}
*/
