/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:43:36 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:44:44 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main()
{
    char c = 'A';
    int fd = 1; // Descriptor de archivo para la salida estándar (stdout)

    ft_putchar_fd(c, fd);

    return 0;
}
*/
