all: help.out strlength.out strconcat.out strcompare.out 

help.out: 
	gcc help_menu.c -o help.out

mystrings.o:
	gcc mystrings.c -c mystrings.o

strlength.out: mystrings.o
	gcc strlength.c mystrings.o -o strlength.out

strconcat.out: mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.out

strcompare.out: mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.out

clean: 
	rm *.o *.out
