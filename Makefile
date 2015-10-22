all: main.o findup.o
	cc -o findup main.o findup.o

main.o: main.c findup.h
	cc -c main.c

findup.o: findup.c findup.h
	cc -c findup.c

clean:
	rm *.o
	rm findup
