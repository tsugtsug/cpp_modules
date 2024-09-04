# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 04:18:49 by yokamura          #+#    #+#              #
#    Updated: 2024/03/28 00:03:02 by yokamura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
SRCS = main.cpp Span.cpp
OBJS = $(SRCS:%.cpp=%.o)
CXX	 = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
