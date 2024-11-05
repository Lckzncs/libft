/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:46:09 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 11:50:09 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd (n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}
/*
int	main()
{
    int	fd;

    fd = 1;

    ft_putnbr_fd(12345, fd);
    write(fd, "\n", 1); 
    ft_putnbr_fd(-67890, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(0, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1);

    return 0;
}
*/
