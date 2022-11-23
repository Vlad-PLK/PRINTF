LIBFT = libft/

SRCS = ft_printf.c ft_arg_types.c ft_utils_func.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				make -C ${LIBFT}
				cp libft/libft.a ${NAME}
				ar src ${NAME} ${OBJS}

all:		${NAME}

clean:	
				make clean -C ${LIBFT}
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}
				make fclean -C ${LIBFT}

re:				fclean all

.PHONY:		all clean fclean re
