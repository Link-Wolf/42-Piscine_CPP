# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 15:20:46 by xxxxxxx           #+#    #+#              #
#    Updated: 2022/06/13 10:19:36 by xxxxxxx          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex01
SRCS 		=	main.cpp Span.cpp
OBJS 		=	${SRCS:.cpp=.o}
CCXX		=	@c++
RM			=	@rm -rf
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

.cpp.o :
	$(CCXX) -c $(CXXFLAGS) -o $@ $<

all: $(NAME)

$(NAME):	$(OBJS)
	$(CCXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

clean:
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	$(RM) $(NAME)
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re: fclean all

check_leaks:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes 		\
	./$(NAME)

.PHONY: all clean fclean re
