#include "rational.h"
int maxdivisor(int x, int y){
	int max = (x > y) ? x : y;

	while(max % x != 0 || max % y != 0){
		++max; 
	}	
	return max;
}
	





rational sum (rational* n1, rational* n2) {
	rational obj;
	obj.denominator = maxdivisor(n1->denominator, n2->denominator);
	obj.numerator =( (obj.denominator / n1->denominator) * n1->numerator) + ((obj.denominator / n2->denominator) * n2->numerator);
	return obj;
}
rational product(rational* n1, rational* n2){
	rational obj1;
	obj1.denominator = n1->denominator * n2->denominator;
	obj1.numerator = n1->numerator * n2->numerator;
	return obj1;

}
