NAME		= libft.a

SRCS		= ft_calloc.c \
				ft_atoi.c \
				ft_strchr.c \
				ft_strncmp.c \
				ft_split.c

HEAD	= ./libft.h

CC		= gcc

AR		= ar rcs

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

OBJS	= ${SRCS:.c=.o}

%.o : %.c ${HEAD} Makefile
			${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}:	${OBJS} 
			@${AR} ${NAME} ${OBJS}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re 