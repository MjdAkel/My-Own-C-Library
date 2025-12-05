/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:45:06 by makel             #+#    #+#             */
/*   Updated: 2025/11/24 12:48:33 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));   // should be 1
    printf("ft_isalnum('9') = %d\n", ft_isalnum('9'));   // should be 1
    printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));   // should be 0
    return 0;
}
*/