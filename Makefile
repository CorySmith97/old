CC=clang
C_FILES=src/main.c src/alloc.c
C_FLAGS=-std=c89 -Wall -g
BUILD_DIR=bin

INCLUDE=
INCLUDE+= -I/opt/homebrew/Cellar/sdl2/2.32.10/include/SDL2
INCLUDE+= -I/opt/homebrew/Cellar/sdl2_image/2.8.8/include/SDL2

LINK=
LINK+= -L/opt/homebrew/Cellar/sdl2/2.32.10/lib -lsdl2
LINK+= -L/opt/homebrew/Cellar/sdl2_image/2.8.8/lib -lsdl2_image

main:
	$(CC) -o $(BUILD_DIR)/main $(C_FILES) $(C_FLAGS) $(LINK) $(INCLUDE)
