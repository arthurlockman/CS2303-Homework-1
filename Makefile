all: Lab1 num

Lab1: Lab1.o
	gcc Lab1.o -o Lab1

Lab1.o:
	gcc -c Lab1.c

num: num.o
	gcc num.o -o num

num.o:
	gcc -c num.c

clean:
	rm -f Lab1.o Lab1 num.o num

