# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luarodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 19:00:56 by luarodri          #+#    #+#              #
#    Updated: 2024/10/05 22:35:46 by luarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -g
NAMEC = client
NAMES = server
PRINTF = ft_printf/libftprintf.a
PRINTFCL = ft_printf
FLAGS = -Wall -Werror -Wextra
SRCS = client.c
SRSS = server.c
RM = rm -rf

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
	@$(RM) ${NAMEC}
	@$(RM) ${NAMES}
	@cd $(PRINTFCL) && make fclean
	@echo ALL CLEAR
re: clean all
