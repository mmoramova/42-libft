# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:27:46 by mmoramov          #+#    #+#              #
#    Updated: 2022/10/21 15:58:32 by mmoramov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
C_FLAGS = -Wall -Wextra -Werror
RM = rm -f

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

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
	  ft_substr.c  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_lstnew.c ft_lstadd_front.c \
	  ft_lstsize.c ft_lstlast.c \
	  ft_lstadd_back.c
OBJ = $(SRC:.c=.o)
INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@

$(NAME):: $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)
	@echo "$(BLUE) \t everything has $(MAGENTA)been compilated! \n blabla"

$(NAME)::
	@echo "\t Nothing to do in the make"

.PHONY: all clean fclean re

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "wauuu all clean"
	
re: fclean all

