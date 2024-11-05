# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 12:28:02 by ludo-nas          #+#    #+#              #
#    Updated: 2024/10/07 12:28:05 by ludo-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = *.c
SRC_BONUS = *bonus.c
OBJS_BONUS = $(SRC_BONUS:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)
bonus: 
	cc $(FLAGS) -c $(SRC_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

re: fclean all
