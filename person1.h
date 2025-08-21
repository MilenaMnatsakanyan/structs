#include <stdio.h>
#include "person.h"

int bmiper(person *p) {
	float bmi = p->weight / ((p->height / 100) * (p->height / 100));
	
	if(bmi > 25){
		return 1;
	}
	else if(bmi > 18 && bmi < 25){
		return 0;
	}

	return -1;
}
