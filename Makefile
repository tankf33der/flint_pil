all: qsieve ecm

qsieve: qsieve.c
	gcc qsieve.c -I /usr/include/flint -lflint -o qsieve.out

ecm: ecm.c
	gcc ecm.c -I /usr/include/flint -lflint -o ecm.out
