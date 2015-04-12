##
## Makefile for makefile in /home/mathie_g/rendu/Piscine11/Piscine_C_J11/lib/my
## 
## Made by killian mathieu
## Login   <mathie_g@epitech.net>
## 
## Started on  Mon Mar 23 13:06:05 2015 killian mathieu
## Last update Sat Apr 11 13:43:10 2015 killian mathieu
##

NAME	= printf

LIBC	= libmy.a

SRCS	= ./fcts/my_printf.c \
	  ./fcts/my_putstr.c \
          ./fcts/my_getnbr.c \
          ./fcts/my_putchar.c \
          ./fcts/my_put_nbr.c \
	  ./fcts/my_put_nbr_unsigned.c

LIB	= -lmy -L./

BIN	= Makefile~

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): 
	$(CC) -o $(NAME) $(SRCS) $(LIB)

create: $(OBJS)
	ar rc $(LIBC) $(OBJS)
	ranlib $(LIBC)

clean:
	$(RM) $(OBJS) $(BIN)

fclean: clean
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
