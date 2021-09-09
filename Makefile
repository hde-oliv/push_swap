SRC		:=

SRC_DIR :=	sources
INC_DIR :=	headers
OBJ_DIR :=	objects

INCLS   :=	$(INC_DIR)

SRCS	:=	$(addprefix $(SRC_DIR)/,$(SRC))
OBJS	:=	$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC		:=	clang

CFLAGS	+=	-Wall -Wextra -Werror
IFLAGS	+=	-I.
LFLAGS	+=	-L.
TFLAGS	+=	-fsanitize=address -g3

RM		:=	rm -rf

NAME	:=	push_swap

all:		obj $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(IFLAGS)/$(INCLS)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(SNAME)

clean:
			$(MAKE) -C $(PFT_DIR) clean
			$(RM) $(OBJS) $(OBJ_DIR)

fclean: 	clean
			$(MAKE) -C $(PFT_DIR) fclean
			$(RM) $(SNAME) $(CNAME)

re: 		fclean all

obj:
			mkdir -p $(OBJ_DIR)

.PHONY: 	all clean fclean re obj
