CC=g++
CFLAGS=-std=c++11 -c -Wall
INCLUDES=-I../SFML-2.1/include
LIBRARIE=-l../SFML-2.1/bin/sfml-window-d-2
PROGNAME=executioner

.PHONY: clean

all: $(PROGNAME)
$(PROGNAME): main.o
	$(CC) $(INCLUDES) $(LIBRARIES) main.o -o ../bin/$(PROGNAME).exe

main.o: main.cpp
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBRARIES) main.cpp
