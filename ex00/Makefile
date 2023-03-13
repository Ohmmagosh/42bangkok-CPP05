# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/13 21:01:42 by psuanpro          #+#    #+#              #
#    Updated: 2023/03/13 21:08:59 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MommyWhenIGrowUpIWantToBeABureaucrat!
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		Bureaucrat.cpp

OBJS = ${SRCS:.cpp=.o}

BRED =\033[1;31m
BGRN =\033[1;32m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BGRN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

.cpp.o:
	@$(CC) -g $(CFLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJS)
	@$(CC) -g $(CFLAGS) $(OBJS) -o $@
	@$(COMPILE)

clean:
	@rm -rf $(OBJS)
	@$(CLEAN)

fclean: clean
	@rm -rf $(NAME)
	@$(FCLEAN)

re: fclean all

.PHONY: all re clean fclean

