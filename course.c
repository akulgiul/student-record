#include "course.h"
#include <stdio.h>

char *string_degree(Degree degree) {
	switch (degree) {
	case Bachelor:
		return "Bachelor";
	case Master:
		return "Master";
	default:
		return "Not a Degree";
	}
}
char *string_course(Course course) {
	switch (course) {
	case Art:
		return "Art";
	case Biology:
		return "Biology";
	case Chemistry:
		return "Chemistry";
	case CS:
		return "CS";
	case Engineering:
		return "Engineering";
	case History:
		return "History";
	case Int_Relations:
		return "International relations";
	case Law:
		return "Law";
	case Mathematics:
		return "Mathematics";
	case Medicine:
		return "Medicine";
	case Philosophy:
		return "Philosophy";
	case Physics:
		return "Physics";
	case Psychology:
		return "Psychology";
	default:
		return "NaC";
	}
}
