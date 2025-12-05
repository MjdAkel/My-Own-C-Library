/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:55:11 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 11:31:52 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char src[] = "HelloWorld";
    char dest[6]; // small buffer

    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination after strlcpy: %s\n", dest);
    printf("Length of source: %zu\n", len);

    return 0;
}
*/