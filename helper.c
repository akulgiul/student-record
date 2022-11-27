/**
 * @file helper.c
 * @author luka luig (luka@4luig.de)
 * @brief implememtation of helper "class"
 * @date 2022-10-19
 *
 * Copyright (c) 2022 luka luig
 *
 */

#include <limits.h>
#include <stdio.h>
#include "helper.h"

// user input for int in given range (including min and max)
int input_int_range(int min, int max, char attribute[]) {
	// make sure min < max
	if(max > min){
		int tmp = min;
		min = max;
		max = tmp;
	}
	int input = INT_MIN;
	while (1) {
		printf("%s\nPlease enter an integer from %d to %d: ", attribute, min, max);
		scanf("%d", &input);
		if (input >= min && input <= max)
			return input;
		else
			printf("Sorry! Integer entered is not in range.\n");
	}
}

// user input for string
char *input_string(char attribute[]){
	return "";
}
