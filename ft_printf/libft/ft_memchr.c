/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:17:42 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/18 21:31:26 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr_s;
	size_t		i;

	i = 0;
	ptr_s = (const char *)s;
	while (i < n)
	{
		if (ptr_s[i] == (char)c)
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
