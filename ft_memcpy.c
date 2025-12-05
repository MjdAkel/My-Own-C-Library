/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:29:00 by makel             #+#    #+#             */
/*   Updated: 2025/11/28 14:01:26 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_tmp;
	const char	*src_temp;

	dst_tmp = dst;
	src_temp = src;
	if (dst_tmp == src_temp)
		return (dst_tmp);
	while (n > 0)
	{
		*dst_tmp = *src_temp;
		dst_tmp++;
		src_temp++;
		n--;
	}
	return (dst);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, 13); // copy "Hello, World!" including '\0'

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    int nums_src[] = {10, 20, 30, 40, 50};
    int nums_dest[5];

    ft_memcpy(nums_dest, nums_src, 5 * sizeof(int));

    printf("Numbers copied: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", nums_dest[i]);
    printf("\n");

    return 0;
}
*/