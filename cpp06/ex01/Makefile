#CONFIG

NAME = iter
CC++ = c++
RM = rm -rf

#FILES

HEADER = iter.hpp

SRCS = main.cpp			\


OBJDIR = .obj

OBJS = $(addprefix $(OBJDIR)/,$(SRCS:.cpp=.o))

#FLAGS

C++FLAGS = -Wall -Wextra -Werror -g -std=c++98

#COMMANDS

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC++) $(OBJS) $(C++FLAGS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC++) $(C++FLAGS) -c $< -o $@
	@echo "$(YELLOW)Compiling $<...$(DEFAULT)"

clean:
	$(RM) $(OBJDIR)
	@echo "$(YELLOW)object files deleted.$(DEFAULT)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(RED)all files deleted.$(DEFAULT)"

re : fclean all

.PHONY:
		all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m