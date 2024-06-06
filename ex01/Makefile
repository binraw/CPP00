NAME = PhoneBook


SRCS_FILE = Contact.class.cpp PhoneBook.class.cpp PhoneBook.cpp
HEADER_FILE = Contact.class.hpp PhoneBook.class.hpp

CC = cc
CFLAGS = -Wall -Wextra -Werror




OBJS = $(SRCS_FILE:.cpp=.o)


RM = rm -Rf

all: ${NAME}

${NAME}: ${OBJS}
	$(CXX) $(OBJS) -o $(NAME)



%.o: %.c  Makefile ${HEADER_FILE}
	$(CXX) ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: fclean all



.PHONY: all clean fclean re 
