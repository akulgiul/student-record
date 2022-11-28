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

// incomplete type => encapsulation of attributes
typedef struct Student Student;

// constructer
Student *student_init();

// deconstructor
void student_destroy(Student *student);

// simple setters
void student_set_id(Student *student, int ID);
void student_set_name(Student *student, char n_name[]);
void student_set_surname(Student *student, char n_name[]);
void student_set_degree(Student *student, Degree n_degree);
void student_set_course(Student *student, Course n_course);
void student_set_semesert(Student *student, int semester);

// simple getters
int student_get_id(Student *student);
char *student_get_name(Student *student);
char *student_get_surname(Student *student);
Degree student_get_degree(Student *student);
Course student_get_course(Student *student);
int student_get_semester(Student *student);

#endif
