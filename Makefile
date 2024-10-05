# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luarodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 19:00:56 by luarodri          #+#    #+#              #
#    Updated: 2024/10/04 19:11:53 by luarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -g
NAMEC = client
NAMES = server
LIBFT = ft_printf/libft/libft.a
PRINTF = ft_printf/libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = client.c
SRSS = server.c

all:	${NAMEC} ${NAMES}

${LIBFT}:
	@make -C libft
${PRINTF}:
	@make -C ft_printf
${NAMEC}: ${LIBFT} ${PRINTF}
	@${CC} ${SRCS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMEC}
${NAMES}: ${LIBFT} ${PRINTF}
	${CC} ${SRSS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMES}
clean:
	@rm ${NAMEC}
	@rm ${NAMES}
	@rm -rf client.dSYM server.dSYM
	@echo ALL CLEAR
re: clean all
