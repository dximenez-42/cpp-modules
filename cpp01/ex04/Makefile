NAME		= sed
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRCS		= main.cpp program.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)