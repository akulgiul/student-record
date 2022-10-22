/**
 * @file student.h
 * @author luka luig (luka@4luig.de)
 * @brief student class
 * @date 2022-10-22
 *
 * Copyright (c) 2022 luka luig
 *
 */

#include "course.h"

typedef struct {
	unsigned int student_id;
	char *name;
	char *surname;
	Degree degree;
	Course course;
	int semester;
} Student;

// simple getters

int get_id(Student *student) { return student->student_id; }
char *get_name(Student *student) { return student->name; }
char *get_surname(Student *student) { return student->surname; }
Degree get_degree(Student *student) { return student->degree; }
Course get_course(Student *student) { return student->course; }
int get_semester(Student *student) { return student->semester; }
