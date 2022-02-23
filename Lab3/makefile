program: lab3.o linkList.o main.o	
	gcc -o program lab3.o linkList.o main.o

main.o: main.c lab3.h
	gcc -c main.c

linkList.o: linkList.c lab3.h
	gcc -c linkList.c

clean:
	rm -f *.o program 
