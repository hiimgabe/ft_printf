NAME = libftprintf.a
LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror
INCLUDE = .
CC = cc
RM = rm -f
AR = ar -rc

OBJ = ft_printf.o ft_printf_char.o ft_printf_string.o ft_printf_pointer.o ft_printf_hexadecimal.o

all: $(NAME)

$(NAME): $(OBJ)
	make bonus -C libft
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	make clean -C libft
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all

gab: all clean
