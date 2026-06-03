CC        = cc
CFLAGS    = -Wall -Wextra -Werror 
LIBFT_DIR = ../
LIBFT     = $(LIBFT_DIR)/libft.a
INCLUDES  = -I $(LIBFT_DIR)

compile: $(LIBFT)
	@$(CC) $(CFLAGS) main.c $(TEST_SRC) $(LIBFT) $(INCLUDES) -o test_elf

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	@rm -f test_elf

.PHONY: compile clean
