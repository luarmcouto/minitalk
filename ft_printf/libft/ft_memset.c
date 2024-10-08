/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:55:35 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/18 19:32:31 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len--)
		*(tmp_ptr++) = (unsigned char) c;
	return (b);
}
/*
#include <stdio.h>

int	main(void) {
	char str[50] = "Hello, world!";
	printf("Antes do ft_memset: %s\n", str);

	ft_memset(str, 'X', 5);

	printf("Depois do ft_memset: %s\n", str);

	return (0);
}*/