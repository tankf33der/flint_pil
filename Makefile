all:
	gcc demo.c -I /usr/include/flint -lflint -o demo
	./demo

