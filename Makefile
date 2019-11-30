# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 17:28:55 by swofferh       #+#    #+#                 #
#    Updated: 2019/11/29 21:43:31 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

LIB = ./libft.a
CFLAGS = -Wall -Wextra -Werror -I . -I libft
NAME = sue-test-framework-super-cool-libft

SRC = suetest.c

TESTS = test_atoi.c	test_bzero.c test_memccpy.c test_memchr.c test_strlen.c \
		test_strrchr.c
# calloc.c itoa.c memcmp.c memcpy.c memmove.c memset.c putchar_fd.c putendl_fd.c  \
putstr_fd.c split.c strdup.c strlcat.c strlcpy.c strncmp.c strchr.c strtrim.c putnbr_fd.c \

OBJ = $(SRC:.c=.o) $(TESTS:.c=.o)

RED = \x1B[91m
GREEN = \x1B[92m
YELLOW = \x1B[93m
BLUE = \x1B[94m
PINK = \x1B[95m
CYAN = \x1B[96m
END = \n\x1B[0m

vpath %.c libft-tests

.PHONY: test clean fclean

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	@printf "$(CYAN)Compiling $< -> $@$(END)"
	@gcc $(CFLAGS) -o $@ $^

$(LIB):
	@printf "$(BLUE)Running make in $(dir $(LIB))\n"
	@$(MAKE) -C $(dir $(LIB))

%.o: %.c
	@printf "$(PINK)Compiling $< -> $@$(END)"
	@gcc $(CFLAGS) -c $< -o $@

test:
	@printf "$(YELLOW)Running $(NAME)$(END)"
	@./$(NAME)

clean:
	@printf "$(RED)Cleaning $(OBJ) $(END)"
	@$(RM) $(OBJ)

fclean: clean
	@printf "$(RED)Cleaning $(NAME) $(END)"
	@$(RM) $(NAME)
 		
re: fclean all
