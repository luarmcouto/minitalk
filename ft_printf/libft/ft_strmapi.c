/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:49:54 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/17 21:43:49 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*check;
	size_t	i;

	check = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !check)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		check[i] = (*f)(i, s[i]);
		i++;
	}
	check[i] = '\0';
	return (check);
}
