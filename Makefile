NAME = push_swap

B_NAME = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror
INC = -I INCLUDES -I LIBFT/INCLUDES -I LIBFT/libft

LIBFT_A = libftprintf.a

#						[PUSH_SWAP]
P_PATH = SRCS/push_swap/
P_SRCS_NAME = best_move.c move_it.c move_to_stack_b.c needed_moves.c \
	push_swap.c set_position.c sort_big_stack.c sort_three.c target_position.c \
	the_last_step.c

P_OBJS_NAME = $(P_SRCS_NAME:.c=.o)
P_OBJS = $(addprefix $(P_PATH),$(P_OBJS_NAME))

#						[#SHARED]
S_PATH = SRCS/shared/
S_SRCS_NAME = pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c ss.c \
			bubble_sort.c check_error.c counter.c create_stacks.c is_sorted.c \
			free_arguments.c free_double.c free_stacks.c ft_exit.c \
			get_data.c ft_swap.c get_started.c

S_OBJS_NAME = $(S_SRCS_NAME:.c=.o)
S_OBJS = $(addprefix $(S_PATH),$(S_OBJS_NAME))

#					[#CHECKER]
C_PATH = SRCS/checker/
C_SRCS_NAME = checker.c start_check.c

C_OBJS_NAME = $(C_SRCS_NAME:.c=.o)
C_OBJS = $(addprefix $(C_PATH),$(C_OBJS_NAME))

#							[OBJECTS]
OBJS = $(S_OBJS) $(P_OBJS)
B_OBJS = $(S_OBJS) $(C_OBJS)

all : do_libft $(NAME)

bonus : do_libft $(B_NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(INC) -c $<

do_libft :
	@make -C ./LIBFT
	@cp ./LIBFT/$(LIBFT_A) .

$(NAME) : $(OBJS)
	@mv $(S_OBJS_NAME) $(S_PATH) 2> /dev/null || true
	@mv $(P_OBJS_NAME) $(P_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(S_OBJS) $(P_OBJS) $(LIBFT_A) -o $@
	
$(B_NAME) : $(B_OBJS)
	@mv $(S_OBJS_NAME) $(S_PATH) 2> /dev/null || true
	@mv $(C_OBJS_NAME) $(C_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(S_OBJS) $(C_OBJS) $(LIBFT_A) -o $@

clean :
	@make clean -C ./LIBFT
	@rm -f $(OBJS) $(B_OBJS)
	@rm -f $(P_OBJS_NAME) $(S_OBJS_NAME) $(C_OBJS_NAME)

fclean: clean
	@make fclean -C ./LIBFT
	@rm -f $(LIBFT_A)
	@rm -rf $(NAME)
	@rm -rf $(B_NAME)

re : fclean all

.PHONY: all clean fclean re do_libft bonus
