NAME = replace

all: $(NAME)

$(NAME):
	clang++ -Wall -Werror -Wextra main.cpp -o $(NAME)

clean:
	rm -rf hola.txt.replace

fclean: clean
	rm -rf $(NAME)

test:
	./replace hola.txt.replace tal jaime

re: fclean $(NAME)

.PHONY: clean fclean re
