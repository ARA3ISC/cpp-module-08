NAME = span
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98 -fsanitize=address
RM = rm -f
SRC = main.cpp span.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
