all:nbo

nbo: nbo.o
	g++ -o nbo nbo.o 

nbo.o: nbo.cpp
	g++ -c -o nbo.o nbo.cpp -fstack-protector-all

clean:
	rm -r nbo.o
	
