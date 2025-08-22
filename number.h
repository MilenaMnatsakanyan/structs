#ifndef NUMBER_H
#define NUMBER_H
typedef union {
	int intValue;
	float floatValue;
}number;
void assign(number* n);
#endif
