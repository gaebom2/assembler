# Write this Makefile
myas : main.o trans.o check.o
	gcc -o myas main.o check.o trans.o -lm
main.o : myas.h main.c
	gcc -c myas.h  main.c
trans.o : myas.h trans.c check.c
	gcc -c myas.h trans.c check.c
check.o : myas.h check.c
	gcc -c myas.h check.c
clean :
	rm -rf main.o check.o trans.o myas
