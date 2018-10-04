run: pascal
	./pascal

pascal: pascal.c
	gcc -Wall -std=c11 pascal.c -o pascal

build: pascal
