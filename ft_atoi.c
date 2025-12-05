/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:55:49 by makel             #+#    #+#             */
/*   Updated: 2025/11/28 14:02:54 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("String '42' -> %d\n", ft_atoi("42"));
    printf("String '   -42' -> %d\n", ft_atoi("   -42"));
    printf("String '+123' -> %d\n", ft_atoi("+123"));
    printf("String '4193 with words' -> %d\n", ft_atoi("4193 with words"));
    printf("String 'words 987' -> %d\n", ft_atoi("words 987"));

    return 0;
}
*/