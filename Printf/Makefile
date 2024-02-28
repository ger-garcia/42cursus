NAME		= libftprintf.a

CC			= gcc

AR			= ar rc

CFLAGS		= -Wall -Werror -Wextra

HEAD		= ft_printf.h

SRCHEAD		= ./src/src_libft.h

OBJS		= ${SRCS:.c=.o}

L_OBJS		= ${L_SRCS:.c=.o}

####SRC - PRINTF #####

SRC_DIR = ./

SRCS_PRINTF = ft_printf.c

SRCS = $(addprefix $(SRC_DIR),$(SRCS_PRINTF))


#####SRC_LIBFT######

SRC_LIBFT_DIR 	= ./src/

SRCS_LIBFT = ft_strchr.c \
			 ft_strlen.c \
			 ft_write_pstr.c \
			 ft_print_char.c \
			 ft_print_string.c \
			 ft_print_num.c \
			 ft_print_hex.c \
			 ft_print_ptr.c

L_SRCS	= $(addprefix $(SRC_LIBFT_DIR), $(SRCS_LIBFT))

#################

all:		${NAME}

${NAME}:	${OBJS} ${L_OBJS}
			${AR} ${NAME} ${OBJS} ${L_OBJS}

%.o : %.c ${HEAD} ${SRCHEAD} Makefile
			${CC} ${CFLAGS} -c $< -o $@

clean:
			rm -f ${OBJS} ${L_OBJS}

fclean:		clean
			rm -f ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re 