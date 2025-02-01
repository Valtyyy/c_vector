##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

rwildcard		=	$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) \
					$(filter $(subst *,%,$2),$d))

LIB_PATH		=	lib/

SRC 			= 	$(filter-out src/main.c, $(call rwildcard, src/, *.c)) \

SRC_DEV			=	src/main.c

OBJ_DEV			=	$(SRC_DEV:.c=.o)

OBJ				=	$(SRC:.c=.o)

CPPFLAGS		=	-Iinclude/

CFLAGS			=	-Wall -Wextra

NAME			=	c_vector.a

all:			$(NAME)

$(NAME):		$(OBJ)
				$(AR) rcs $(NAME) $(OBJ)

dev:			$(NAME) $(OBJ_DEV)
				gcc $(CFLAGS) $(OBJ_DEV) $(NAME) -o dev

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME) dev

re:				fclean all

coding-style:
				coding-style . .
				cat *.log
				$(RM) *.log

debug:			CPPFLAGS += -ggdb3
debug:			dev

.PHONY:			$(NAME)	dev all clean fclean re coding-style debug
