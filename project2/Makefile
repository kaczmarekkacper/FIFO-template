CC = g++  # compiler

CFLAGS = -O3 -Wall #-std=c++11 # additional flags for compilation, c++11 required ?
HEADERS = -Iinclude # includes directory

SRCDIR = src
BUILDDIR = bin
DEPDIR = libs

TARGET = project2 # executable name

default: directory fifo letternumber node main # components for compilation

directory:
	mkdir -p $(BUILDDIR) $(DEPDIR)

fifo:
	$(CC) -c $(HEADERS) $(SRCDIR)/Fifo.cpp -o $(DEPDIR)/Fifo.o

letternumber:
	$(CC) -c $(HEADERS) $(SRCDIR)/LetterNumber.cpp -o $(DEPDIR)/LetterNumber.o

node:
	$(CC) -c $(HEADERS) $(SRCDIR)/Node.cpp -o $(DEPDIR)/Node.o

main: 
	 $(CC) $(CFLAGS) $(HEADERS) $(DEPDIR)/* $(SRCDIR)/main.cpp -o $(BUILDDIR)/$(TARGET)

clean:
	rm -rf $(BUILDDIR)
	rm -rf $(DEPDIR)
open:
	./$(BUILDDIR)/$(TARGET)
