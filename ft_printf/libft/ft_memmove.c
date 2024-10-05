/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:00:02 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/05/18 20:28:22 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	if (!dst && !src)
		return (NULL);
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	if (tmp_src < tmp_dst)
		while (len--)
			tmp_dst[len] = tmp_src[len];
	else
		while (len--)
			*(tmp_dst++) = *(tmp_src++);
	return (dst);
}
