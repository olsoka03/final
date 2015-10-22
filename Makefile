all: changeupper.o isupper.o
	cc -o changeupper isupper.o changeupper.o
changeupper.o: changeupper.c isupper.h
	cc -c changeupper.c
isupper.o: isupper.c isupper.h
	cc -c isupper.c
clean:
	rm *.o
	rm changeupper
