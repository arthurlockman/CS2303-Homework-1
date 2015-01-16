all: Lab1

Lab1: Lab1.o
	gcc Lab1.o -o Lab1

Lab1.o:
	gcc -c Lab1.c

clean:
	rm -f Lab1.o Lab1

