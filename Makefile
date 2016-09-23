NAME =		game

CC =		g++

FLG =		-Wall -Wextra -Werror

INC =		-I./inc

SRC_DIR =	src/
SRC_FILES =	main.cpp			\
			error.cpp			\
			class_engine.cpp	\
			class_window.cpp	\
			class_renderer.cpp	\
			class_events.cpp

SRC =		$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ =		$(SRC_FILES:.cpp=.o)

LIB =		-lSDL2 -lSDL2_image

all: $(NAME)

$(NAME):
	echo "Compiling..."
	$(CC) -O3 -o $(NAME) $(FLG) $(SRC) $(INC) $(LIB)

clean:
	echo "Deleting executable..."
	rm -f $(NAME)

re: clean all

.SILENT:
