all:nbo

nbo: nbo.o
	g++ -o nbo nbo.o

nbo.o: nbo.cpp
	g++ -c -o nbo.o nbo.cpp

clean:
	rm -r nbo.o
	
