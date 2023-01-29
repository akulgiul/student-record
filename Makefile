make: main.o student.o course.o helper.o
	gcc -o student-record main.o student.o course.o helper.o

main.o: main.c
	gcc -c main.c

student.o : student.c student.h
	gcc -c student.c

course.o : course.c course.h
	gcc -c course.c

helper.o : helper.c helper.h
	gcc -c helper.c

clean:
	rm *.o student-record