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
#include "course.h"
#include "helper.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	size_t id;
	char *name;
	char *surname;
	Degree degree;
	Course course;
	size_t semester;
};

// constructor
Student *student_init() {
	Student *student = malloc(sizeof(Student));
	student->name = input_string("name");
	student->surname = input_string("surname");
	student->degree = which_degree();
	student->course = which_course();
	student->semester = input_int_range(1, 20, 0, "semester");
	return student;
}

// deconstructor
void student_destroy(Student *student) { free(student); }

// simple setters
void set_id(Student *student, int ID) { student->id = ID; }
// gets segfaulted
void set_name(Student *student, char *n_name) { strcpy(student->name, n_name); }
// gets segfaulted
void set_surname(Student *student, char *n_surname) { strcpy(student->surname, n_surname); }
void set_degree(Student *student, Degree n_degree) { student->degree = n_degree; }
void set_course(Student *student, Course n_course) { student->course = n_course; }
void set_semester(Student *student, size_t n_semester) { student->semester = n_semester; }

// simple getters
size_t get_id(Student *student) { return student->id; }
char *get_name(Student *student) { return student->name; }
char *get_surname(Student *student) { return student->surname; }
Degree get_degree(Student *student) { return student->degree; }
Course get_course(Student *student) { return student->course; }
size_t get_semester(Student *student) { return student->semester; }

// choose course and degree
Degree which_degree() {
	printf("Which degree is the student undertaking?\n"
		   "\tEnter 0 to cancel\n"
		   "\tEnter 1 to choose the Bachelor degree\n"
		   "\tEnter 2 to choose the Master degree\n");
	int choice = input_int_range(1, 2, 0, "degree");
	switch (choice) {
	case 1:
		return Bachelor;
	case 2:
		return Master;
	default:
		return NaD;
	}
}

Course which_course() {
	int count = 1;
	printf("Which course is the student undertaking?\n"
		   "\tEnter %d to cancel\n");
	for (int course = Art; course != NaC; course++) {
		printf("\tEnter %d to choose %s\n", count, string_course(course));
		count++;
	}
	// taking 0 as cancel option accounts for the - 1
	int choice = input_int_range(1, 13, 0, "course") - 1;
	return course_map[choice];
}
