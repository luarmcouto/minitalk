/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:12:00 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/22 11:52:00 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
