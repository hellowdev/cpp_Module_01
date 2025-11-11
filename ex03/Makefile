CXX = c++

NAME = myprog

CXXFLAGS = -Wall -Wextra -Werror

SRC = HumanB.cpp HumanA.cpp Weapon.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

