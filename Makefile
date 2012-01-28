#Define the compiler:
CC = g++
#Define the files to be compiled
FILES = Main.cpp SortedList.cpp Node.cpp
#define the output
OUT = astar

build: $(FILES)
	$(CC) -o $(OUT) $(FILES)

clean:
	rm -f *.o core

rebuild: clean build
