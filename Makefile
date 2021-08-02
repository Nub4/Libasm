NAME = libasm.a

SRCS = ft_strcpy.s \
	ft_strlen.s \
	ft_strcmp.s \
	ft_write.s \
	ft_read.s \
	ft_strdup.s

OBJECTS = ${SRCS:.s=.o}

%.o	: %.s
	nasm -f macho64 $< -o $@

HEADER_FOLDER = includes

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I${HEADERS_FOLDER}

all: ${NAME}

${NAME}: ${OBJECTS}

	ar rc ${NAME} ${OBJECTS}

clean:

	${RM} ${OBJECTS}

fclean: clean

	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
