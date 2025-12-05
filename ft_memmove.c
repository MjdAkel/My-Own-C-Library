/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:37:15 by makel             #+#    #+#             */
/*   Updated: 2025/11/28 14:53:35 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dp;
	const char	*sp;

	if (src == dst)
		return (dst);
	dp = (char *)dst;
	sp = (const char *)src;
	if (sp < dp && sp + len > dp)
		while (len--)
			*(dp + len) = *(sp + len);
	else
	{
		while (len--)
		{
			*dp = *sp;
			sp++;
			dp++;
		}
	}
	return (dst);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str1[20] = "123456789";

    char dest[20];
    ft_memmove(dest, str1, 10);
    printf("Normal copy: %s\n", dest);

    ft_memmove(str1 + 2, str1, 5);
    printf("Overlap copy: %s\n", str1);

    return 0;
}
*/