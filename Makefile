NAME = libft.a

SRC = ft_atoi.c     ft_isprint.c  ft_putchar_fd.c  ft_striteri.c  ft_strrchr.c\
ft_bzero.c    ft_itoa.c     ft_putendl_fd.c  ft_strjoin.c   ft_strtrim.c\
ft_calloc.c   ft_memchr.c   ft_putnbr_fd.c   ft_strlcat.c   ft_substr.c\
ft_isalnum.c  ft_memcmp.c   ft_putstr_fd.c   ft_strlen.c    ft_tolower.c\
ft_isalpha.c  ft_memcpy.c   ft_split.c       ft_strmapi.c   ft_toupper.c\
ft_isascii.c  ft_memmove.c  ft_strchr.c      ft_strncmp.c   libft.h\
ft_isdigit.c  ft_memset.c   ft_strdup.c      ft_strnstr.c\

OBJS = $(SRC: .c=.o)

BONUS =

BONUS_OBJS = $(BONUS: .c=.o)

CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

all: 

clean:

fclean:

re:

bonus:
