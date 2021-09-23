CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -I.
SRCS		= tests.cpp Account.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -rf
NAME		= account

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
