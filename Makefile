NAME = libft.a

SRCS = ft_atoi.c     ft_isprint.c  ft_putchar_fd.c  ft_striteri.c  ft_strrchr.c\
ft_bzero.c    ft_itoa.c     ft_putendl_fd.c  ft_strjoin.c   ft_strtrim.c\
ft_calloc.c   ft_memchr.c   ft_putnbr_fd.c   ft_strlcat.c   ft_substr.c\
ft_isalnum.c  ft_memcmp.c   ft_putstr_fd.c   ft_strlen.c    ft_tolower.c\
ft_isalpha.c  ft_memcpy.c   ft_split.c       ft_strmapi.c   ft_toupper.c\
ft_isascii.c  ft_memmove.c  ft_strchr.c      ft_strncmp.c\
ft_isdigit.c  ft_memset.c   ft_strdup.c      ft_strnstr.c\

SRCS_BONUS = \
ft_lstadd_back_bonus.c   ft_lstdelone.c     ft_lstmap.c ft_lstadd_front.c  ft_lstiter.c\
ft_lstnew.c ft_lstclear.c      ft_lstlast.c       ft_lstsize.c \

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${SRCS_BONUS:.c=.o}

CC = cc
CFLAG = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
		${RM} ${NAME}
re: fclean all

bonus: ${NAME} ${OBJS_B}
		ar rcs ${NAME} ${OBJS_B}
.PHONY: all bonus clean fclean re
