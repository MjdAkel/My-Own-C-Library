/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:28:46 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 12:11:32 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char data[] = "Hello World";
    char *ptr1 = ft_memchr(data, 'o', 11);
    if (ptr1)
        printf("Found 'o' at: %s\n", ptr1); // "o World"
    char *ptr2 = ft_memchr(data, 'W', 11);
    if (ptr2)
        printf("Found 'W' at: %s\n", ptr2); // "World"
    char *ptr3 = ft_memchr(data, 'z', 11);
    if (!ptr3)
        printf("'z' not found in first 11 bytes\n");
    return 0;
}
*/