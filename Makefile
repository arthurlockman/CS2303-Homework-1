all: Lab1 num num_grades

Lab1: Lab1.o
	gcc Lab1.o -o Lab1

Lab1.o:
	gcc -c Lab1.c

num: num.o
	gcc num.o -o num

num.o:
	gcc -c num.c

num_grades: num_grades.o
	gcc num_grades.o gpa_calc.o -o num_grades

num_grades.o: num_grades.c gpa_calc.c
	gcc -c num_grades.c gpa_calc.c

clean:
	rm -f Lab1 num num_grades *.o

