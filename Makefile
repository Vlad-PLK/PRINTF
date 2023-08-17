LIBFT = libft/

SRCS = ft_printf.c ft_arg_types.c ft_utils_func.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

# > MESSAGES COLORS <<<<<<

MSG_BCOLOR_FAILURE		:=	\001\e[1;31m\002
MSG_BCOLOR_PRIMARY		:=	\001\e[1;36m\002
MSG_BCOLOR_SUCCESS		:=	\001\e[1;32m\002
MSG_BCOLOR_WARNING		:=	\001\e[1;33m\002
MSG_NCOLOR_FAILURE		:=	\001\e[0;31m\002
MSG_NCOLOR_PRIMARY		:=	\001\e[0;36m\002
MSG_NCOLOR_SUCCESS		:=	\001\e[0;32m\002
MSG_NCOLOR_WARNING		:=	\001\e[0;33m\002

# > TERMINAL <<<<<<<<<<<<<

TERM_CONTROL_CLEAR		:=	\001\e[1;1H\e[2J\002
TERM_CONTROL_RESET		:=	\001\e[0m\002

.c.o:
			@printf "${MSG_BCOLOR_SUCCESS} COMPILING PRINTF "
			@printf "${TERM_CONTROL_RESET} \n"
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				@printf "${MSG_BCOLOR_PRIMARY} CREATING LIBFT "
				@printf "${TERM_CONTROL_RESET}"
				make -C ${LIBFT}
				cp libft/libft.a ${NAME}
				@printf "${MSG_BCOLOR_PRIMARY} CREATING LIBFTPRINTF "
				@printf "${TERM_CONTROL_RESET}"
				ar src ${NAME} ${OBJS}
				@printf "${MSG_BCOLOR_SUCCESS} CREATION COMPLETE "
				@printf "${TERM_CONTROL_RESET}"

all:		${NAME}

clean:	
				make clean -C ${LIBFT}
				@printf "${MSG_BCOLOR_FAILURE} DELETING PRINTF "
				@printf "${TERM_CONTROL_RESET}"
				${RM} ${OBJS}

fclean:		clean
				make fclean -C ${LIBFT}
				@printf "${MSG_BCOLOR_WARNING} DELETING LIBFTPRINTF.A "
				@printf "${TERM_CONTROL_RESET}"
				${RM} ${NAME}

re:				fclean all

.PHONY:		all clean fclean re
