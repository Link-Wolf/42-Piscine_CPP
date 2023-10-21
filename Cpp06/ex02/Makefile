# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 16:58:34 by xxxxxxx           #+#    #+#              #
#    Updated: 2022/05/27 10:18:27 by xxxxxxx          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex02.exe
SRCS 		=	main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJS 		=	${SRCS:.cpp=.o}
OBJS_ABS 	=	${SRCS_ABS:.cpp=.o}
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
