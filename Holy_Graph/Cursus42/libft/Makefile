SRCS =	ft_atoi.c       \
		ft_bzero.c      \
		ft_calloc.c     \
		ft_isalnum.c    \
		ft_isalpha.c    \
		ft_isascii.c    \
		ft_isdigit.c    \
		ft_isprint.c    \
		ft_memchr.c     \
		ft_memcmp.c     \
		ft_memcpy.c     \
		ft_memmove.c    \
		ft_memset.c     \
		ft_strchr.c     \
		ft_strdup.c     \
		ft_strlcat.c    \
		ft_strlcpy.c    \
		ft_strlen.c     \
		ft_strncmp.c    \
		ft_strnstr.c    \
		ft_strrchr.c    \
		ft_tolower.c    \
		ft_toupper.c    \
	    ft_substr.c     \
	    ft_strjoin.c    \
		ft_strtrim.c    \
		ft_split.c      \
		ft_itoa.c       \
		ft_strmapi.c    \
		ft_striteri.c   \
		ft_putchar_fd.c \
		ft_putstr_fd.c  \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_SRCS = ft_lstadd_back.c  \
			 ft_lstadd_front.c \
			 ft_lstclear.c     \
			 ft_lstdelone.c    \
			 ft_lstiter.c      \
			 ft_lstlast.c      \
			 ft_lstmap.c       \
			 ft_lstnew.c       \
			 ft_lstsize.c

OBJS =	${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
CC =	cc
AR = ar rcs
NAME =	libft.a 
CFLAGS = "-Wall -Wextra -Werror"

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}


all:	${NAME}

bonus: all ${BONUS_OBJS} 
	${AR} ${NAME} ${BONUS_OBJS}

so:
	${CC} -nostartfiles -fPIC ${CFLAGS} ${SRCS}
	gcc -nostartfiles -shared -o libft.so ${OBJS}

clean:
	rm -rf ${OBJS} ${BONUS_OBJS}

fclean: clean
		rm -rf ${NAME}

re:	fclean	bonus

.PHONY: all clean fclean bonus re
