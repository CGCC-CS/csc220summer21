all: projhelp

projhelp: projecthelp.c
	gcc --std=c11 -pedantic -Wall projecthelp.c -o projhelp

clean:
	rm -f *.o *.exe *.out projhelp *~

greet:
	echo "Hello `whoami`"