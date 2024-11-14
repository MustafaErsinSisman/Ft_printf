SRCS = 

BONUS = 

OBJS = $(SRCS:.c=.o)
BONUSOBJS = $(BONUS:.c=.o)

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) bonus
	ar rc $(NAME) $(OBJS)

bonus: $(BONUSOBJS)
	ar rc $(NAME) $(BONUSOBJS)

clean:
	rm -rf $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
