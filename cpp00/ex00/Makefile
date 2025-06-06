NAME = megaphone
SRC = megaphone.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re