# CFLAGS 
CFLAGS=-c -std=c99 -Wall -Wextra -O2

# Compiler and linker options for SDL2
SDL_CFLAGS= $(shell sdl2-config --cflags)
SDL_LFLAGS= $(shell sdl2-config --libs)

override CFLAGS += $(SDL_CFLAGS)

# Directory paths for the Header files and the Source files
HEADERDIR= src/
SOURCEDIR= src/

HEADER_FILES= chip8.h gpu.h
SOURCE_FILES= initializeRom.c gpu.c

# Add the file path (FP) to the Header and Source files
HEADERS_PATH = $(addprefix $(HEADERDIR),$(HEADER_FILES))
SOURCE_PATH = $(addprefix $(SOURCEDIR),$(SOURCE_FILES))

# program files
OBJECTS =$(SOURCE:.c = .o)

# Program to build
EXECUTABLE=chip8

#build

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	gcc $(OBJECTS) $(SDL_LFLAGS) -o $(EXECUTABLE)

%.o: %.c $(HEADERS_PATH)
	gcc $(CFLAGS) -o $@ $< 

clean:
	rm -rf src/*.o $(EXECUTABLE)