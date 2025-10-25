NAME = Account
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp test.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f
CC = c++
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all