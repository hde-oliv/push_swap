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
MFLAGS	+=	-lft

RM		:=	rm -rf

NAME	:=	push_swap

LFT_DIR	:=	libft

LFT_HDR	:=	libft/headers


all:		obj lft $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(IFLAGS)/$(INCLS) $(IFLAGS)/$()

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(LFLAGS)/$(LFT_DIR) $(MFLAGS) -o $(NAME)

clean:
			$(MAKE) -C $(LFT_DIR) clean
			$(RM) $(OBJS) $(OBJ_DIR)

fclean: 	clean
			$(MAKE) -C $(LFT_DIR) fclean
			$(RM) $(SNAME) $(CNAME)

re: 		fclean all

lft:
			$(MAKE) -C $(LFT_DIR)

obj:
			mkdir -p $(OBJ_DIR)

.PHONY: 	all clean fclean re obj
