objects = main.o scan.o parse.o util.o

all:	pascal

pascal:	$(objects)
	gcc $(objects) -o pascal

main.o: main.c globals.h util.h scan.h parse.h
	gcc -c main.c -o main.o

scan.o:	scan.c
	gcc -c scan.c -o scan.o

scan.c: flex/pascal.l pascal.tab.h
	flex -o scan.c flex/pascal.l

parse.o: pascal.tab.c
	gcc -c pascal.tab.c -o parse.o 

parse.c: pascal.tab.c
	cp pascal.tab.c parse.c

pascal.tab.c pascal.tab.h: bison/pascal.y
	bison -d -b pascal bison/pascal.y

util.o: util.c
	gcc -c util.c -o util.o

clean: 
	rm *.o
