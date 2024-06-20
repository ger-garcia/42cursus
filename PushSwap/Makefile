NAME	= push_swap

SRCS	=  main.c \
			# algorithm.c costs.c median_sort_push.c \
			nodes.c push.c \
			reverse.c rotate.c small_stack_sorting.c swap.c \
			targets.c utils.c 

HEAD	= ./push_swap.h

LIB		= libft/libft.a

CC		= gcc

AR		= ar rcs

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

%.o: %.c ${HEAD} Makefile
			@${CC} ${CFLAGS} -c $< -o $@ 
#-MMD

all:	${NAME}

${NAME}:	${OBJS}
			make -C libft
			@${AR} ${NAME} ${OBJS} ${LIB} -o ${NAME}

clean:
			make clean -C libft
			@${RM} ${OBJS}

fclean:		clean
			make fclean -C libft
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
