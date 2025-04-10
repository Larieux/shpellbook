
### sources ###

SRC_MAIN =	\
			\
			shpellbook

### directories ###

MAKEF_UNDIR		:= ../
MAKEF_DIR		:= book_weaver
BIN_DIR			:= enchantment_table
INC_DIR			:= compendium
SRC_DIR			:= ../shelf
LIBS_DIR		:= library
PARSER_DIR		:= brewing
EXEC_DIR		:= casting
BUILT_INS_DIR	:= spells
MAIN_DIR		:= spell_weaver
OBJ_DIR			:= $(MAKEF_UNDIR)residual_magic
MLIB_DIR		:= $(LIBS_DIR)/cantrips
MLIB_INC_DIR	:= $(MLIB_DIR)/$(INC_DIR)
MLIB_MAKE_DIR	:= $(MLIB_DIR)/$(MAKEF_DIR)
MLIB_LIB_DIR	:= $(MLIB_DIR)/$(BIN_DIR)

VPATH = $(SRC_DIR)/$(EXEC_DIR) $(SRC_DIR)/$(BUILT_INS_DIR) \
		$(SRC_DIR)/$(PARSER_DIR) \
		$(SRC_DIR)/$(MAIN_DIR)

### objects ###

SRC = $(SRC_EXEC) $(SRC_BUILT_INS) $(SRC_PARSER) $(SRC_MAIN)

OBJ := $(SRC:%.c=$(OBJ_DIR)/%.o)

### flags ###

CPPFLAGS		:=	-I$(INC_DIR) -I$(MLIB_DIR)/$(INC_DIR)
CFLAGS			:=	-Wall -Werror -Wextra
LDFLAGS			:=	-L$(MLIB_DIR)
LDLIBS			:=	-lm -lreadline

### exe ###

MLIB			=	$(MLIB_DIR)/mlib.a

NAME			=	$(BIN_DIR)/shpellbook

### build ###

$(NAME) : $(OBJ) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@ $(MLIB)

$(BIN_DIR) ${OBJ_DIR} :
	mkdir -p $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(MLIB) :
	$(MAKE) -C $(MLIB_MAKE_DIR)

### rules ###

all : $(MLIB) $(NAME)

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