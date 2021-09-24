CXX			= clang++
CFLAGS		= -Wall -Wextra -Werror -I.
SRCS		= main.cpp Phonebook.cpp Contact.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= phonebook

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
