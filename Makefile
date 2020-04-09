output: main.o
	gcc -Wall -Werror main.o -o output

main.o: main.c
	gcc -Wall -Werror -c main.c

clean: 
	rm -f *.o
