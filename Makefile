# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 17:28:55 by swofferh       #+#    #+#                 #
#    Updated: 2020/11/25 19:47:30 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

LIB 	= ./libft/libft.a
CFLAGS	= -Wall -Wextra -Werror -I . -I libft
NAME 	= sue-test-framework-super-cool-libft
DIR 	= objects_file

TESTS = test.c test_atoi.c test_bzero.c test_memccpy.c test_memchr.c test_strlen.c \
		test_strrchr.c test_calloc.c test_strncmp.c test_lists.c\
		#itoa.c memcmp.c memcpy.c memmove.c memset.c putchar_fd.c putendl_fd.c  \
		putstr_fd.c split.c strdup.c strlcat.c strlcpy.c strchr.c strtrim.c putnbr_fd.c \

OBJ = $(TESTS:.c=.o)

# Here are some colors you can use for Makefiles:
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
	@echo "$(CYAN)Compiling $< -> $@ $(END)"
	@gcc $(CFLAGS) -o $@ $^ 
	@mkdir $(DIR)
	@mv $(OBJ) $(DIR)
	@echo "$(GREEN) \n 		HOW TO TEST: run the program with $(PINK)./sue-$(BLUE)test-$(RED)framework-$(YELLOW)super-$(GREEN)cool-$(CYAN)libft\n\n"

$(LIB):
	@echo "$(BLUE)\n		Now running make in $(dir $(LIB))\n"
	@$(MAKE) -C $(dir $(LIB))
	@make bonus -C $(dir $(LIB))
	@cp ./libft/libft.a .
	@cp ./libft/libft.h .
	
.o: %.c
	@echo "$(PINK)Compiling $< -> $@$(END)"
	@gcc $(CFLAGS) -I $(LIB) -c $< -o $@

test: re
	@echo "$(YELLOW)Running $(NAME)$(END)"
	@./$(NAME)

clean:
	@echo "$(RED)Cleaning $(OBJ) $(END)"
	@$(RM) -rf $(DIR) $(OBJ)

fclean: clean
	@echo "$(RED)Cleaning $(NAME) $(END)"
	@$(RM) $(NAME)
	@make fclean -C libft
 		
re: fclean all
