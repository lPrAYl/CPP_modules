NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

CC			=	clang++
CFLAGS		=	-std=c++98 -Wall -Werror -Wextra -O2

GREEN		=	\033[32;1m
BLUE		=	\033[36;1m
PURPLE		=	\033[35;1m
RESET		=	\033[0m

all			:	$(NAME)

%.o			:	%.cpp
			$(CC) $(CFLAGS) -c -o $@ $<

$(NAME)		:	$(OBJS)
			$(CC) -o $@ $<

clean		:
			rm -rf $(OBJS)

fclean		:	clean
			rm -rf $(NAME)

re			:	fclean all

test		:	$(NAME)
			@echo 	  "$(GREEN)----------------------------------------------------------"
			./$(NAME) "shhhhh... I think the students are asleep..."
			@echo 	  "$(BLUE)\n----------------------------------------------------------"
			./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
			@echo 	  "$(PURPLE)\n----------------------------------------------------------"
			./$(NAME)

.PHONY		:	all clean fclean re test