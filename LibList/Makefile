NAME = ../liblist.a

SRC =	addingElement.c \

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
