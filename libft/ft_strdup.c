/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:03:48 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:03:50 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest - len);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char original[] = "Olá, mundo!";
    printf("Original: %s\n", original);

    char *copia = ft_strdup(original);
    printf("Copia: %s\n", copia);

    // Verifica se a cópia é independente da original
    original[0] = 'X';
    printf("Original modificado: %s\n", original);
    printf("Copia: %s\n", copia);

    // Não esqueça de liberar a memória alocada!
    free(copia);

    return 0;
}
*/
