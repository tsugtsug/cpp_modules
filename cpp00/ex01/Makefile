# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 17:50:59 by yokamura          #+#    #+#              #
#    Updated: 2023/11/04 16:28:11 by yokamura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= myawesomephonebook
SRCS	= main.cpp PhoneBook.cpp Contact.cpp
OBJS	= $(SRCS:%.cpp=%.o)
CXX		= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
