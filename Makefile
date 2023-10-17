FILES	= ft_atoi.c	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c

OBJS	= $(FILES:.c=.o)

CC		= cc

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(NAME) $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
