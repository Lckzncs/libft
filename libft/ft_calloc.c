/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:58:04 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 10:58:07 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	t = malloc(nmemb * size);
	if (!t)
	{
		return (NULL);
	}
	ft_memset(t, 0, (nmemb * size));
	return (t);
}

/*
#include <stdio.h>
int main() 
{
    int *arr;
    size_t nmemb = 5;
    size_t size = sizeof(int);

    arr = ft_calloc(nmemb, size);
    if (arr == NULL) 
    {
        printf("Error: no se pudo asignar memoria\n");
        return 1;
    }
    printf("Memoria asignada correctamente\n");
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    free(arr);
    return 0;
}
*/
