# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 19:00:56 by luarodri          #+#    #+#              #
#    Updated: 2024/10/12 22:22:43 by luarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += -s
CC = @cc -g
NAMEC = client
NAMES = server
LIBS_DIR = libft
LIBFT = $(LIBS_DIR)/ft_lib/libft.a
PRINTF = $(LIBS_DIR)/ft_printf/libftprintf.a
GNL = $(LIBS_DIR)/get_next_line/get_next_line.a
LIBFT_MAKE = $(MAKE) -C $(LIBS_DIR)
FLAGS = -Wall -Werror -Wextra
SRCS = client.c
SRSS = server.c
RM = rm -rf

all:	libft ${NAMEC} ${NAMES}

libft:
	@$(LIBFT_MAKE)
	@echo "LIBFT OK"

${NAMEC}: libft
	@${CC} ${SRCS} ${PRINTF} ${LIBFT} ${FLAGS} -o ${NAMEC}
	@echo "CLIENT OK"
${NAMES}: libft
	@${CC} ${SRSS} ${PRINTF} ${LIBFT} ${FLAGS} -o ${NAMES}
	@echo "SERVER OK"
	
clean:
	@$(RM) ${NAMEC} ${NAMES} *.dSYM
	@echo "CLEAN OK"
fclean: clean
	@$(LIBFT_MAKE) fclean
	@echo "FCLEAN OK"

re: fclean all

.PHONY: libft all clean fclean re
