SRCS 	=	char/ft_isalnum.c \
			char/ft_isalpha.c \
			char/ft_isdigit.c  \
			char/ft_isascii.c  \
			char/ft_isprint.c  \
			char/ft_tolower.c  \
			char/ft_toupper.c \
			fds/ft_putchar_fd.c \
			fds/ft_putendl_fd.c \
			fds/ft_putnbr_fd.c \
			fds/ft_putstr_fd.c \
			int/ft_atoi.c \
			int/ft_itoa.c \
			strings/ft_split.c \
			strings/ft_strchr.c \
			strings/ft_strdup.c \
			strings/ft_striteri.c \
			strings/ft_strjoin.c \
			strings/ft_strlcat.c \
			strings/ft_strlcpy.c \
			strings/ft_strlen.c \
			strings/ft_strmapi.c \
			strings/ft_strncmp.c \
			strings/ft_strnstr.c \
			strings/ft_strtrim.c \
			strings/ft_substr.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \

B_SRC	= 	lists/ft_lstnew.c \
			lists/ft_lstadd_front.c \
			lists/ft_lstsize.c \
			lists/ft_lstlast.c \
			lists/ft_lstadd_back.c \
			lists/ft_lstdelone.c \
			lists/ft_lstiter.c \
			lists/ft_lstclear.c

# > MESSAGES COLORS <<<<<<

MSG_BCOLOR_FAILURE		:=	\001\e[1;31m\002
MSG_BCOLOR_LOGGING		:=	\001\e[1;37m\002
MSG_BCOLOR_PRIMARY		:=	\001\e[1;36m\002
MSG_BCOLOR_REPORTS		:=	\001\e[1;35m\002
MSG_BCOLOR_SUCCESS		:=	\001\e[1;32m\002
MSG_BCOLOR_WARNING		:=	\001\e[1;33m\002
MSG_NCOLOR_FAILURE		:=	\001\e[0;31m\002
MSG_NCOLOR_LOGGING		:=	\001\e[0;37m\002
MSG_NCOLOR_PRIMARY		:=	\001\e[0;36m\002
MSG_NCOLOR_REPORTS		:=	\001\e[0;35m\002
MSG_NCOLOR_SUCCESS		:=	\001\e[0;32m\002
MSG_NCOLOR_WARNING		:=	\001\e[0;33m\002

# > TERMINAL <<<<<<<<<<<<<

TERM_CONTROL_CLEAR		:=	\001\e[1;1H\e[2J\002
TERM_CONTROL_RESET		:=	\001\e[0m\002

OBJS	= ${SRCS:.c=.o}

B_OBJS	= ${B_SRC:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			@printf "$(MSG_BCOLOR_PRIMARY) COMPILING : "
			@printf "$(TERM_CONTROL_RESET)"
			${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				@printf "${MSG_BCOLOR_SUCCESS} CREATING LIBRARY : "
				@printf "$(TERM_CONTROL_RESET)"
				ar src ${NAME} ${OBJS}

bonus:		${OBJS} ${B_OBJS}
				ar src ${NAME} ${OBJS} ${B_OBJS}

all:		${NAME}

clean:	
				@printf "$(MSG_BCOLOR_FAILURE) DELETING OBJECTS FILES : "
				@printf "$(TERM_CONTROL_RESET)"
				${RM} ${OBJS} ${B_OBJS}

fclean:		clean
				@printf "$(MSG_BCOLOR_WARNING) DELETING LIBRARY FILE : "
				@printf "$(TERM_CONTROL_RESET)"
				${RM} ${NAME}

re:				fclean all

.PHONY:		all bonus clean fclean re
