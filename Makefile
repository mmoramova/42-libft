# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:27:46 by mmoramov          #+#    #+#              #
#    Updated: 2022/10/11 20:25:48 by mmoramov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
C_FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_isalpha.c ft_toupper.c \
	  ft_isdigit.c ft_tolower.c \
	  ft_isalnum.c ft_strchr.c  \
	  ft_isascii.c ft_strrchr.c \
	  ft_isprint.c ft_strncmp.c \
	  ft_strlen.c  ft_memchr.c  \
	  ft_memset.c  ft_memcmp.c  \
	  ft_bzero.c   ft_strnstr.c \
	  ft_memcpy.c  ft_atoi.c \
	  ft_memmove.c ft_calloc.c \
	  ft_strlcpy.c ft_strdup.c \
	  ft_strlcat.c \
	  ft_putchar_fd.c
OBJ = $(SRC:.c=.o)
INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

