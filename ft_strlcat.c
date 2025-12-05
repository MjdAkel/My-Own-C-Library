/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:35:51 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 11:37:43 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_size;
	size_t	s_size;

	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	if (dstsize <= d_size)
		return (dstsize + s_size);
	i = d_size;
	j = 0;
	while ((i + j) < (dstsize - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (d_size + s_size);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[20] = "Hello";
    char src[] = "World";

    size_t result = ft_strlcat(buffer, src, sizeof(buffer));
    printf("After strlcat: %s\n", buffer); 
    printf("Total length attempted: %zu\n", result); 
    // Test with small buffer
    char smallbuf[8] = "Hello";
    result = ft_strlcat(smallbuf, src, sizeof(smallbuf));

    printf("After strlcat (small buffer): %s\n", smallbuf);
    printf("Total length attempted: %zu\n", result);
    return 0;
}
*/