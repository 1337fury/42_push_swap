NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB = ./libft/libft.a

SRCS_PATH = SRCS/
SRCS_NAME = \
	ft_printf.c \
	ft_putstr.c \
	ft_putchar.c \
	ft_pformat.c \
	ft_putnbr.c \
	ft_putunsigned.c \
	ft_put_hexa.c \
	ft_putsign.c \
	ft_putptr.c \
	get_next_line.c \
	get_next_line_utils.c
	
OBJS_NAME = $(SRCS_NAME:.c=.o)
OBJS = $(addprefix $(SRCS_PATH),$(OBJS_NAME))

all : libftcomb $(OBJS) $(NAME)

libftcomb :
	@make all -C ./libft

$(NAME) : $(LIB)
	@libtool -static -o $@ $(LIB) $(OBJS)

%.o:$(SRCS_PATH)%.c
	@$(CC) $(CFLAGS) -c $<

clean :
	@make clean -C ./libft
	@rm -f $(OBJS)
	@rm -f $(OBJS_NAME)

fclean: clean
	@make fclean -C ./libft
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re