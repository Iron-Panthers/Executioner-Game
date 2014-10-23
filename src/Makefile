CC=g++
CFLAGS=-std=c++11 -c -Wall
INCLUDES=-I../SFML-2.1/include
LIBRARYDIR=-L../SFML-2.1/lib
LIBS=-lsfml-window-d -lsfml-main-d -lsfml-system-d -lsfml-graphics-d -lsfml-audio-d
PROGNAME=executioner

.PHONY: clean

all: $(PROGNAME)
$(PROGNAME): Character.o GameState.o main.o 
	$(CC) $(INCLUDES) GameState.o Character.o main.o $(LIBRARYDIR) $(LIBS) -o ../bin/$(PROGNAME).exe 

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDES) main.cpp

Character.o: Character.cpp
	$(CC) $(CFLAGS) $(INCLUDES) Character.cpp

GameState.o: GameState.cpp
	$(CC) $(CFLAGS) $(INCLUDES) GameState.cpp

clean:
	rm *.o
