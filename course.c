#include "course.h"
#include <stdio.h>

char *string_degree(Degree degree) {
	switch (degree) {
	case Bachelor:
		return "bachelor";
	case Master:
		return "master";
	default:
		return "Not a Degree";
	}
}
char *string_course(Course course) {
	switch (course) {
	case Art:
		return "art";
	case Biology:
		return "Biology";
	case Chemistry:
		return "Chemistry";
	case CS:
		return "CS";
	case Engineering:
		return "engineering";
	case History:
		return "history";
	case Int_Relations:
		return "international relations";
	case Law:
		return "law";
	case Mathematics:
		return "mathematics";
	case Medicine:
		return "medicine";
	case Philosophy:
		return "philosophy";
	case Physics:
		return "physics";
	case Psychology:
		return "psychology";
	default:
		return "NaC";
	}
}
