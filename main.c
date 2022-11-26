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
	student_set_id(luka, 99);
	int id = student_get_id(luka);
	printf("%d", id);
	student_destroy(luka);
}
