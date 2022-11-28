/**
 * @file student.c
 * @author luka luig (luka@4luig.de)
 * @brief implementation of student class
 * @date 2022-11-02
 *
 * Copyright (c) 2022 luka luig
 *
 */

#include "student.h"
#include <stdio.h>
#include <stdlib.h>

struct Student {
	unsigned int student_id;
	char *name;
	char *surname;
	Degree degree;
	Course course;
	int semester;
};

// constructor
Student *student_init() {
	Student *student = malloc(sizeof(Student));
	return student;
}

// deconstructor
void student_destroy(Student *student) {
	free(student);
}

// simple setters
void student_set_id(Student *student, int ID) {
	student->student_id = ID;
}

void student_set_name(Student *student, char n_name[]) {
}

void student_set_surname(Student *student, char n_name[]) {
}

void student_set_degree(Student *student, Degree n_degree) {
}

void student_set_course(Student *student, Course n_course) {
}

void student_set_semester(Student *student, int n_semester) {
}

// simple getters
int student_get_id(Student *student) {
	return student->student_id;
}

char *student_get_name(Student *student) {
	return student->name;
}

char *student_get_surname(Student *student) {
	return student->surname;
}

Degree student_get_degree(Student *student) {
	return student->degree;
}

Course student_get_course(Student *student) {
	return student->course;
}

int student_get_semester(Student *student) {
	return student->semester;
}
