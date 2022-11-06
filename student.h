/**
 * @file student.h
 * @author luka luig (luka@4luig.de)
 * @brief student class (header)
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

	// simple setters
	void (*set_name)(void *self, char *new_name);
	void (*set_surname)(void *self, char *new_surname);
	void (*set_degree)(void *self, Degree new_degree);
	void (*set_course)(void *self, char *new_course);
	void (*set_semester)(void *self, char *new_semester);

	void (*next_semester)(void *self);

} Student;
