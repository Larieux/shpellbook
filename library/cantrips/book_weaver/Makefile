
### sources ###

SRC		=	ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c \
			ft_memcmp.c ft_memchr.c \
			ft_toupper.c ft_tolower.c \
			ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_strnrcmp.c \
			ft_strnstr.c \
			ft_atoi.c ft_itoa.c \
			ft_calloc.c \
			ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c \
			ft_split.c \
			ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_free_dtab.c \
			get_next_line_utils.c get_next_line.c \
			ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c 

### directories ###

MAKEF_UNDIR		:= ../
MAKEF_DIR		:= book_weaver
BIN_DIR			:= $(MAKEF_UNDIR)enchantment_table
INC_DIR			:= $(MAKEF_UNDIR)compendium
SRC_DIR			:= $(MAKEF_UNDIR)shelf
OBJ_DIR			:= $(MAKEF_UNDIR)residual_magic

VPATH = $(SRC_DIR)/$(EXEC_DIR) $(SRC_DIR)/$(BUILT_INS_DIR) \
		$(SRC_DIR)/$(PARSER_DIR) \
		$(SRC_DIR)/$(MAIN_DIR)

### objects ###

OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)

### flags ###

CPPFLAGS		:=	-I$(INC_DIR)
CFLAGS			:=	-Wall -Werror -Wextra

### exe ###

NAME			=	$(BIN_DIR)/mlib.a

### build ###

$(NAME) : $(OBJ) | $(BIN_DIR)
	ar rcs $(NAME) $(OBJ)

$(BIN_DIR) ${OBJ_DIR} :
	mkdir -p $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

### rules ###

all : $(NAME)

debug :
	CFLAGS+=-g
	all

clean :
	$(MAKE) -C $(MLIB_MAKE_DIR) clean
	@$(RM) -rv $(OBJ_DIR)

fclean : clean
	$(MAKE) -C $(MLIB_MAKE_DIR) fclean
	$(RM) $(NAME)

re : fclean all

minigrind :
	valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes --suppressions=readline.supp $(NAME)

.PHONY : all $(MLIB) clean fclean re minigrind