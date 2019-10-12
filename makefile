all: myStringLib.o main.o
	gcc -o strtest myStringLib.o main.o

myStringLib.o: myStringLib.c myStringLib.h
	gcc -c myStringLib.c

main.o: main.c myStringLib.h
	gcc -c main.c

run:
	./strtest

clean:
	rm *.o
	rm *~
