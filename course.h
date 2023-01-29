/**
 * @file course.h
 * @author luka luig (luka@4luig.de)
 * @brief enum types Degree and Course
 * @date 2022-10-22
 *
 * Copyright (c) 2022 luka luig
 *
 */
#ifndef COURSE_H
#define COURSE_H

typedef enum {
	Bachelor,
	Master,
	NaD // Not a Degree
} Degree;

typedef enum {
	Art,
	Biology,
	Chemistry,
	CS,
	Engineering,
	History,
	Int_Relations,
	Law,
	Mathematics,
	Medicine,
	Philosophy,
	Physics,
	Psychology,
	NaC // Not a Course
} Course;

static const Course course_map[] = {Art,		Biology,	   Chemistry,  CS,			Engineering,
									History,	Int_Relations, Law,		   Mathematics, Medicine,
									Philosophy, Physics,	   Psychology, NaC};

char *string_degree(Degree degree);
char *string_course(Course course);

#endif
