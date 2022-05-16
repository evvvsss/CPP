NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
GPP = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(GPP) $(OBJS) -o $(NAME)
	clear

$(OBJS): %.o : %.cpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all, re, clean, fclean
