NAME = ../libmy.a

SRC =  my_putchar.c \
       my_put_nbr.c \
       my_putstr.c  \
       my_strlen.c  \
       my_strcmp.c  \
       my_strcpy.c  \

OBJ = $(SRC:%.c=%.o)
AR  = ar r
RAN = ranlib
RM  = rm -rf

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RAN) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:  clean
	$(RM) $(NAME)
re: fclean all