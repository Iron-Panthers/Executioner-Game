CC=g++
CFLAGS=-std=c++11 -c -Wall
INCLUDES=-I../SFML-2.1/include
LIBRARYDIR=-L../SFML-2.1/lib
LIBS=-lsfml-window-d -lsfml-main-d -lsfml-system-d -lsfml-graphics-d -lsfml-audio-d
PROGNAME=executioner

.PHONY: clean

all: $(PROGNAME)
$(PROGNAME): main.o
	$(CC) $(INCLUDES) main.o $(LIBRARYDIR) $(LIBS) -o ../bin/$(PROGNAME).exe 

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDES) main.cpp

clean:
	rm *.o
