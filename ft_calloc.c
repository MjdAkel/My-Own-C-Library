/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makel <makel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:26:55 by makel             #+#    #+#             */
/*   Updated: 2025/11/27 12:27:54 by makel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)ft_calloc(3, sizeof(int));
    if (!arr)
        return 1;

    printf("%d %d %d\n", arr[0], arr[1], arr[2]); //  0 0 0

    free(arr);
    return 0;
}
*/