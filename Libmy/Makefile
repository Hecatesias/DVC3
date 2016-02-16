CC = gcc

NAME = libmy.a

SRC = *.c

OBJ = $(SRC:%.c=%.o)

RM = rm -f

CFLAGS = -W -Wall -Werror

$(NAME):$(OBJ)
			ar r $(NAME) *.o
			ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all