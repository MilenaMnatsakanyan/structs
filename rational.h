#ifndef RATIONAL_H
#define RATIONAL_H
typedef struct {
	int numerator;
	int denominator;
}rational;
rational sum(rational *n1, rational *n2);
rational product(rational *n1, rational *n2);
#endif
