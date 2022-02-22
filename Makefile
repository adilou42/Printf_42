NAME= libftprintf.a
CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
LDFLAGS= -L.
LDLIBS= -lft
SRC= character.c ft_printf.c ft_putchar.c ft_putnbr.c ft_strlen.c hexadecimal.c integer.c nbrlen_long.c nbrlen_unsigned.c nbrlen.c pointer.c pourcentage.c putnbr_base.c putnbr_pointer.c putnbr_unsigned.c putstr.c string.c unsi.c hexalen.c
OBJ = $(SRC:.c=.o)
INC = ./inc/

$(NAME): $(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

%.o: %.c
		$(CC) -I${INC} -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: clean clean