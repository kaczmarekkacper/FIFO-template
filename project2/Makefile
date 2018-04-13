CC = g++ # compiler

CFLAGS = -O3 -Wall -std=c++11
HEADERS = -Iinclude

SRCDIR = scr
BUILDDIR = bin
DEPDIR = libs

TARGET = project2

default: directory testing letternumber main

directory:
	mkdir -p $(BUILDDIR) $(DEPDIR)

letternumber:
	$(CC) -c $(HEADERS) $(SRCDIR)/LetterNumber.cpp -o $(DEPDIR)/LetterNumber.o

testing:
	$(CC) -c $(HEADERS) $(SRCDIR)/Testing.cpp -o $(DEPDIR)/Testing.o

main:
	$(CC) $(CFLAGS) $(HEADERS) $(DEPDIR)/* $(SRCDIR)/main.cpp -o $(BUILDDIR)/$(TARGET)

clean:
	rm -rf $(BUILDDIR)
	rm -rf $(DEPDIR)

open:
	./$(BUILDDIR)/$(TARGET)
