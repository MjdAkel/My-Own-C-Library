/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:13:13 by makel             #+#    #+#             */
/*   Updated: 2025/11/28 14:00:38 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>
int main(void)
{
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
    printf("ft_isprint('A') = %d\n", ft_isprint('A'));
    printf("ft_isprint(127) = %d\n", ft_isprint(127));
    return 0;
}
*/