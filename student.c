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

Student *student_init() {
	Student *student = malloc(sizeof(Student));
	return student;
}

void student_destroy(Student *student) {
	free(student);
}

void student_set_id(Student *student, int ID){
	student->student_id = ID;
}

int student_get_id(Student *student){
	return student->student_id;
}
