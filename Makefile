make: main.o student.o
	gcc -o student-record main.o student.o

main.o: main.c student.h
	gcc -c main.c

student.o : student.c student.h course.h
	gcc -c student.c

clean:
	rm *.o student-record