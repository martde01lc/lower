lower: lower1.o lower2.o
	cc -o lower lower1.o lower2.o

lower1.o: lower1.c lower.h
	cc -c lower1.c

lower2.o: lower2.c lower.h
	cc -c lower2.c

clean:	
	rm *.o
	rm lower
