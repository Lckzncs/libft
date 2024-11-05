/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:45:05 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:45:29 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
/*
void perror(const char *);

#include <fcntl.h>
int main()
{
    char *mensaje = "Hola, mundo!";
    int fd = 1;

    ft_putendl_fd(mensaje, fd);

    fd = open("salida.txt", O_WRONLY | O_CREAT, 0644);
    if (fd!= -1) {
        ft_putendl_fd(mensaje, fd);
        close(fd);
    } else {
        perror("Error al abrir el archivo");
    }

    return 0;
}
*/
