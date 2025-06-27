# Colors for output
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

# Compiler and Flags
CXX = c++
CCXXFLAGS = -Wall -Wextra -Werror -std=c++17 

#Files
NAME = Animal

# Source and Object directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

# Source files
SRC_FILES = main.cpp \
			$(SRC_DIR)/Animal.cpp \
			$(SRC_DIR)/Dog.cpp \
			$(SRC_DIR)/Cat.cpp \
			$(SRC_DIR)/WrongAnimal.cpp \
			$(SRC_DIR)/WrongCat.cpp 

# obj files
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJ = $(OBJ_FILES:%.o=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) $(GREEN) Built Succesfully$(RESET)"

# Compile .cpp into .o in obj/ folder
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	@echo "$(YELLOW) Object files cleaned.$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED) Executable $(NAME) removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re

# # Colors for output
# GREEN = \033[0;32m
# YELLOW = \033[0;33m
# RED = \033[0;31m
# RESET = \033[0m

# # Compiler and Flags
# CXX = c++
# CCXXFLAGS = -Wall -Wextra -Werror -std=c++17 

# #Files
# NAME = Animal

# # Source files
# SRC = main.cpp \
# 	  src/Animal.cpp \
# 	  src/Dog.cpp \
# 	  src/Cat.cpp \


# # obj files
# OBJ = $(SRC:.cpp=.o)

# # Rules
# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
# 	@echo "$(NAME) $(GREEN) Built Succesfully$(RESET)"

# clean:
# 	rm -f $(OBJ)
# 	@echo "$(YELLOW) Object files cleaned.$(RESET)"

# fclean: clean
# 	rm -f $(NAME)
# 	@echo "$(RED) Executable $(NAME) removed.$(RESET)"

# re: fclean all

# .PHONY: all clean fclean re