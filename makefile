run : static.o
	g++ -o run static.o
static.o : static.cpp
	g++ -c static.cpp
clean :
	rm run static.o
