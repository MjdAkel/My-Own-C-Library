/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 12:38:08 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 10:21:13 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
void to_upper(unsigned int i, char *c)
{
    (void)i; // index not used
    *c = (char)toupper(*c);
}
int main(void)
{
    char str[] = "hello world";
    printf("Before: %s\n", str);
    ft_striteri(str, to_upper);
    printf("After:  %s\n", str);
    return 0;
}
*/