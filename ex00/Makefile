CXX		= clang++
CFLAGS	= -Wall -Wextra -Werror
SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= megaphone

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
