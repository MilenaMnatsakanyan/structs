#include "seasons.h"

void getnum(int month){
	SEASONS s;
	
	if (month == 12 || month == 1 || month == 2){
		s = WINTER;
	}
	else if(month < 6){
		s = SPRING;
	}
	else if(month < 9){
		s = SUMMER;
	}
	else{
		s = FALL;
	}

switch(s) {
	case WINTER:
		printf("Winters months are : December, January, February");
	break;

	case SPRING:
		printf("Spring months are : March, April, May" );
	break;

	case SUMMER:
		printf("Summers moths are : June, July, August" );
	break;

	case FALL:
		printf("Falls months are : September, October, November ");
	break;
}
}
