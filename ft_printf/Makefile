# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 11:58:22 by luamonteiro       #+#    #+#              #
#    Updated: 2024/06/15 16:43:50 by luarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchr.c ft_putnb.c ft_putnbrunsig.c ft_putstri.c ft_puthex.c ft_putptr.c
OBJS = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT = ./libft
LIBFTNAME = libft.a
LIBC = ar -rcs
NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC)	$(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp	libft/libft.a $(NAME)
	$(LIBC)	$(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)
	@cd $(LIBFT) && make clean

fclean: clean
	@$(RM) $(NAME)
	@cd $(LIBFT) && make fclean

re: fclean all

.PHONY: all clean fclean rerm