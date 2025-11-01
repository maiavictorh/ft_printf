# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/12 15:34:12 by victode-          #+#    #+#              #
#    Updated: 2025/11/01 18:44:10 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME= libftprintf.a

# Files to compile
SRCS= $(wildcard *.c)

# Object files
OBJS= $(SRCS:.c=.o)
# BNS_OBJS= $(BONUS:.c=.o)

# Compile, flag, compress and remove commands
CC= cc
CFLAGS= -Wall -Wextra -Werror
COMPRESS= ar rcs
RM= rm -f

# Rule: all = libftprintf.a
all: $(NAME)

# libftprintf.a = compress objects and create library
$(NAME): $(OBJS)
	$(COMPRESS) $(NAME) $(OBJS)
	ranlib $(NAME)

# Compile the objects
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule: clean = remove temporary files (objects)
clean:
	$(RM) $(OBJS) $(BNS_OBJS)

# Rule: fclean = remove all files (objects and libftprintf.a)
fclean: clean
	$(RM) $(NAME)

# Rule: re = equivalent to <make fclean> and <make all>
re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lft -o test

.PHONY: all clean fclean re test