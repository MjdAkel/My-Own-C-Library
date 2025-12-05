/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:06:56 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 12:37:41 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && c <= 127)
		return (c);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>
int main(void)
{
    printf("ft_isascii(65) = %d\n", ft_isascii(65));
    printf("ft_isascii(127) = %d\n", ft_isascii(127)); 
    printf("ft_isascii(200) = %d\n", ft_isascii(200));   
    return 0;
}
*/