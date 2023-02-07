INC=%%%%

INCLIB=$(INC)/../lib

NAME= cube

SRC = main.c data_checker.c get_next_line.c\
		get_next_line_utils.c utiles.c\
		mlx.c map_check.c

LFLAGS = -L../minilibx-linux -lmlx -L$(INCLIB) -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(LFLAGS) libft.a -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
# -L../minilibx-linux -lmlx -L$(INCLIB) -lXext -lX11 -lm
# -lmlx -framework OpenGL -framework AppKit