# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 17:28:55 by swofferh       #+#    #+#                 #
#    Updated: 2019/11/26 21:33:52 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

LIB = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror -I . -I libft
NAME = sue-test-framework-super-cool-libft

SRC = suetest.c

TESTS = atoi.c bzero.c
# calloc.c itoa.c memccpy.c memchr.c memcmp.c memcpy.c memmove.c memset.c putchar_fd.c putendl_fd.c putnbr_fd.c putstr_fd.c split.c strchr.c strdup.c strlcat.c strlcpy.c strlen.c strncmp.c strrchr.c strtrim.c

OBJ = $(SRC:.c=.o) $(TESTS:.c=.o)

RED = \x1B[91m
GREEN = \x1B[92m
YELLOW = \x1B[93m
BLUE = \x1B[94m
PINK = \x1B[95m
CYAN = \x1B[96m

ENDL = \n\x1B[0m

vpath %.c libft-tests

.PHONY: test clean fclean

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	@printf "$(CYAN)Compiling $< -> $@$(ENDL)"
	@gcc $(CFLAGS) -o $@ $^

$(LIB):
	@printf "$(BLUE)Running make in $(dir $(LIB))\n"
	@$(MAKE) -C $(dir $(LIB))

%.o: %.c
	@printf "$(PINK)Compiling $< -> $@$(ENDL)"
	@gcc $(CFLAGS) -c $< -o $@

test:
	@printf "$(YELLOW)Running $(NAME)$(ENDL)"
	@./$(NAME)

clean:
	@printf "$(RED)Cleaning $(NAME)$(ENDL)"
	@$(RM) $(NAME)

fclean: clean
	@printf "$(RED)Cleaning $(OBJ)$(ENDL)"
	@$(RM) $(OBJ)
	@printf "$(BLUE)Running make fclean in $(dir $(LIB))\n"
	@$(MAKE) fclean -C $(dir $(LIB))
 		
re: fclean all
