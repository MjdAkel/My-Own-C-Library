/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:00:35 by makel             #+#    #+#             */
/*   Updated: 2025/11/26 13:45:39 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";

    char *ptr1 = ft_strchr(str, 'o');
    if (ptr1)
        printf("First 'o' found at: %s\n", ptr1); // "o World"

    char *ptr2 = ft_strchr(str, 'W');
    if (ptr2)
        printf("Found 'W' at: %s\n", ptr2);       // "World"

    return 0;
}
*/