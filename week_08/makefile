calculator: add.o subtract.o multiply.o divide.o main.o
	gcc add.o subtract.o multiply.o divide.o main.o -o calculator

add.o: add.c
	gcc -c add.c

subtract.o: subtract.c
	gcc -c subtract.c

multiply.o: multiply.c
	gcc -c multiply.c

divide.o: divide.c
	gcc -c divide.c

main.o: main.c
	gcc -c main.c

clean:
	rm -f calculator add.o subtract.o multiply.o divide.o main.o
 Missing newline at the end of file.
