G++ = g++


all: main.exe

main.exe: main.o casilla.o tablero.o
	$(G++) -o main.exe casilla.o main.o tablero.o

main.o: main.cpp
	$(G++) -c main.cpp -o main.o

article.o: article.cpp
	$(G++) -c article.cpp -o article.o

casilla.o: casilla.cpp
	$(G++) -c casilla.cpp -o casilla.o

tablero.o: tablero.cpp lector.hh
	$(G++) -c tablero.cpp -o tablero.o

customer.o: customer.cpp
	$(G++) -c customer.cpp -o customer.o

clean:
	rm -f *.o
	rm -f *.exe
	rm -f *.tar
