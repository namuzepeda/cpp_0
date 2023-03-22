NAME= megaphone

SRC =   Megaphone.cpp 

OBJ= $(SRC:.cpp=.o)

CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(FLAG_FT) $(OBJ) -o $(NAME) $(LIB)
%.o: %.c
	c++ -o $@ -c $< $(CFLAGS)

re: fclean all

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	
