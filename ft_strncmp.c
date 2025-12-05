/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:30:28 by makel             #+#    #+#             */
/*   Updated: 2025/11/28 14:02:42 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n - 1) && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Compare 'abc' vs 'abd' (n=3): %d\n", ft_strncmp("abc", "abd", 3));
    printf("Compare 'abc' vs 'abc' (n=0): %d\n", ft_strncmp("abc", "abc", 0));
    return 0;
}
*/