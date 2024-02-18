NAME		= libftprintf.a

CC			= gcc

AR			= ar rc

CFLAGS		= -Wall -Werror -Wextra

HEAD		= printf.h

OBJS		= ${SRCS:.c=.o}

L_OBJS		= ${L_SRCS:.c=.o}

####SRC - PRINTF #####

SRC_DIR = ./

SRCS_PRINTF = ft_printf.c

SRCS = $(addprefix $(SRC_DIR),$(SRCS_PRINTF))


#####LIBFT######

LIBFT_DIR 	= ./src/

SRCS_LIBFT = ft_print_char.c \
			 ft_write_pstr.c \
			 ft_putchar_fd.c \
			 ft_putnbr_fd.c \
			 ft_strchr.c \
			 ft_putendl_fd.c \
			 ft_putstr_fd.c	\
			 ft_strlen.c \
			 ft_write_pstr.c \
			 ft_print_string.c \
			 ft_print_num.c

L_SRCS	= $(addprefix $(LIBFT_DIR), $(SRCS_LIBFT))

#################

all:		${NAME}

${NAME}:	${OBJS} ${L_OBJS}
			${AR} ${NAME} ${OBJS} ${L_OBJS}

%.o : %.c ${HEAD} Makefile
			${CC} ${CFLAGS} -c $< -o $@

clean:
			rm -f ${OBJS} ${L_OBJS}

fclean:		clean
			rm -f ${NAME}

re: 		fclean all

# output: 	${NAME} main.c
# 			${CC} ${CFLAGS} main.c ${NAME} -o output

# sclean:		fclean
# 			rm -f output
# 			rm	-rf *.out

.PHONY:		all clean fclean re #sclean output
#incluye todas las referencias que no quiere que compruebes
