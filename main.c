/**
 * @file main.c
 * @author luka luig (luka@4luig.de)
 * @brief
 * @date 2022-11-02
 *
 * Copyright (c) 2022 luka luig
 *
 */

#include "student.h"
#include <stdio.h>

int main(void) {
	Student *luka = student_init();

	printf("%zu\n", get_id(luka));
	// printf("%s\n", get_name(luka));
	printf("%s\n", get_surname(luka));
	printf("%s\n", string_degree(get_degree(luka)));
	printf("%s\n", string_course(get_course(luka)));
	printf("%zu\n", get_semester(luka));
	student_destroy(luka);
}