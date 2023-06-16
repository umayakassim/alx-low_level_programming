school: main.o utils.o
    gcc main.o utils.o -o school

main.o: main.c
    gcc -c main.c

utils.o: utils.c
    gcc -c utils.c

all: school

clean:
    rm -f school *.o
