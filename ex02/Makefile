program = account
FLAGE = -Wall -Wextra -Werror -std=c++98
comp = c++

sur = Account.cpp tests.cpp

obj =$(sur:.cpp=.o)

all: $(program)

$(program): $(obj)
	$(comp) $(FLAGE) $(obj) -o $(program)

%.o : %.cpp
	$(comp) $(FLAGE) -c $< -o $@

clean:
	rm -rf $(obj)

fclean:	clean
	rm -rf $(program)

re: fclean all

.SECONDARY: $(obj)
