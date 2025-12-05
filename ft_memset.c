/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:54:21 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 11:29:15 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[10];
    ft_memset(buffer, 'A', 5); // fill first 5 bytes with 'A'
    buffer[5] = '\0';
    printf("Buffer after memset: %s\n", buffer);
    return 0;
}
*/