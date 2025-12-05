/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:35:41 by makel             #+#    #+#             */
/*   Updated: 2025/11/25 11:09:19 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
/*
#include <stdio.h>
int main(void)
{
    char buffer[10];
    for (int i = 0; i < 9; i++)
        buffer[i] = 'X';
    buffer[9] = '\0';
    printf("Before bzero: %s\n", buffer);
    return 0;
}
*/
