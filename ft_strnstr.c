/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:49:42 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 12:19:46 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char text[] = "Hello World";

    char *ptr1 = ft_strnstr(text, "World", 11);
    if (ptr1)
        printf("Found 'World': %s\n", ptr1); // "World"

    char *ptr2 = ft_strnstr(text, "World", 5);
    if (!ptr2)
        printf("'World' not found within first 5 chars\n");

    char *ptr3 = ft_strnstr(text, "", 11);
    printf("Empty substring returns: %s\n", ptr3); // "Hello World"

    return 0;
}
*/