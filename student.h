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

	// simple getters
	int (*get_id)(void *self);
	char (*get_name)(void *self);
	char (*get_surname)(void *self);
	Degree (*get_degree)(void *self);
	Course (*get_course)(void *self);
	int (*get_semester)(void *self);

} Student;
