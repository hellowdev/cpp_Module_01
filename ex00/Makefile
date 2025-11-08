CXX = c++

Name = myprog

CXXFLAGS = -Wall -Wextra -Werror

SRC = newZombie.cpp randomChump.cpp  Zombie.cpp main.cpp

OBJ = ${SRC:.cpp=.o}

all: $(Name)

$(Name) : $(OBJ) Zombie.hpp
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(Name)
%.o : %.cpp Zombie.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

