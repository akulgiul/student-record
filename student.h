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

//simple setters
void student_set_id(Student *student, int ID);

//simple getters
int student_get_id(Student *student); 

#endif
