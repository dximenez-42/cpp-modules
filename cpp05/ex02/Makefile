NAME		= forms
CXX			= c++
CXXFLAGS	= -g -std=c++98 -Wall -Wextra -Werror

SRCS		= main.cpp Bureaucrat.cpp AForm.cpp ShubberyCreationForm.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)