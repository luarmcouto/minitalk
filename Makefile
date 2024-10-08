# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luamonteiro <luamonteiro@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 19:00:56 by luarodri          #+#    #+#              #
#    Updated: 2024/10/08 10:41:23 by luamonteiro      ###   ########.fr        #
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

${PRINTF} ${LIBFT}:
	@make -C ft_printf
${NAMEC}: ${LIBFT} ${PRINTF}
	@${CC} ${SRCS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMEC}
${NAMES}: ${LIBFT} ${PRINTF}
	@${CC} ${SRSS} ${LIBFT} ${PRINTF} ${FLAGS} -o ${NAMES}
clean:
	@$(RM) ${NAMEC} ${NAMES}
	@echo CLEAN
fclean:
	@$(RM) ${NAMEC} ${NAMES}
	@$(RM) client.dSYM server.dSYM
	@cd $(PRINTFCL) && make fclean
	@echo ALL CLEAR
re: clean all
