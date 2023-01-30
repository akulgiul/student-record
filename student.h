/**
 * @file student.h
 * @author luka luig (luka@4luig.de)
 * @brief student class (header)
 * @date 2022-10-22
 *
 * Copyright (c) 2022 luka luig
 *
 */

#ifndef STUDENT_H
#define STUDENT_H

#include "course.h"
#include <stddef.h>

// incomplete type => encapsulation of attributes
typedef struct Student Student;

// constructer
Student *student_init();

// deconstructor
void student_destroy(Student *student);

// simple setters
void set_id(Student *student, int ID);
void set_name(Student *student, char *n_name);
void set_surname(Student *student, char *n_name);
void set_degree(Student *student, Degree n_degree);
void set_course(Student *student, Course n_course);
void set_semester(Student *student, size_t n_semester);

// simple getters
size_t get_id(Student *student);
char *get_name(Student *student);
char *get_surname(Student *student);
Degree get_degree(Student *student);
Course get_course(Student *student);
size_t get_semester(Student *student);

// choose course and Degree
Degree which_degree();
Course which_course();

#endif
