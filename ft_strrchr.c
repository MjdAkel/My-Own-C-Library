/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:26:30 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 12:31:43 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	unsigned char	ch;
	size_t			offset;

	ch = c;
	offset = ft_strlen(str);
	ptr = (char *)str + offset;
	if (ch == '\0')
		return (ptr++);
	while (ptr >= str)
	{
		if (*ptr == ch)
			return (ptr);
		ptr--;
	}
	ptr = NULL;
	return (ptr);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *res = ft_strrchr("Hello world!", 'o');
    printf("%s\n", res); // prints "orld!"
    return 0;
}

*/