LIBFT_DIR = ft_lib
FT_PRINTF_DIR = ft_printf
GNL_DIR = get_next_line
LIBFT_MAKE = $(MAKE) -C $(LIBFT_DIR)
FT_PRINTF_MAKE = $(MAKE) -C $(FT_PRINTF_DIR)
GNL_MAKE = $(MAKE) -C $(GNL_DIR)
RM = rm -rf

all: libft ft_printf get_next_line

libft:
	@$(LIBFT_MAKE)
ft_printf:
	@$(FT_PRINTF_MAKE)
get_next_line:
	@$(GNL_MAKE)

clean:
	@$(RM) $(LIBFT_DIR)/*.o
	@$(RM) $(FT_PRINTF_DIR)/*.o
	@$(RM) $(GNL_DIR)/*.o

fclean: clean
	@$(RM) $(LIBFT_DIR)/libft.a
	@$(RM) $(FT_PRINTF_DIR)/libftprintf.a
	@$(RM) $(GNL_DIR)/libgnl.a

re: fclean all

# Declarar alvos que não correspondem a arquivos reais
.PHONY: all libft ft_printf clean fclean re get_next_line
