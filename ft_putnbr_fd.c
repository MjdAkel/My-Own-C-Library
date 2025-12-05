/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:15:23 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 12:21:54 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}
/*
#include "libft.h"

int main(void)
{
    ft_putnbr_fd(42, 1);        // prints "42"
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(-42, 1);       // prints "-42"
    ft_putchar_fd('\n', 1);

    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);

    return 0;
}
*/