/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:55:01 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/17 21:43:08 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void) {
	char c;
	printf("Digite um caractere: ");
	scanf("%c", &c);

	printf("%d\n", ft_isascii(c));
	return (0);
}*/