/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:58:39 by luamonteiro       #+#    #+#             */
/*   Updated: 2024/06/15 15:44:52 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_putchr(char c);
int	ft_putstri(char *str);
int	ft_putnb(long n);
int	ft_putnbrunsig(unsigned int nbr);
int	ft_putptr(void *arg);
int	ft_puthex(unsigned long arg, char flag);
int	ft_printf(const char *content, ...);

#endif