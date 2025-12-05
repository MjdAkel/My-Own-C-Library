/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:40:49 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 12:37:42 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char a[] = "Hello";
    char b[] = "Hello";
    char c[] = "Hellp";

    printf("Compare a vs b (n=5): %d\n", ft_memcmp(a, b, 5)); // 0
    printf("Compare a vs c (n=5): %d\n", ft_memcmp(a, c, 5));
    printf("Compare a vs c (n=4): %d\n", ft_memcmp(a, c, 4));

    int nums1[] = {1, 2, 3};
    int nums2[] = {1, 2, 4};
    printf("Compare nums1 vs nums2 (n=3*sizeof(int)): %d\n",
           ft_memcmp(nums1, nums2, 3 * sizeof(int)));

    return 0;
}
*/