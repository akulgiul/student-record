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


static int get_id() {
	return 0;
}

static void student_init(Student *student) {
	student->get_id = &get_id;
}
