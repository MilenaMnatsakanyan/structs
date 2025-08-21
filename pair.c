#include "pair.h"
void swap(pair* p1, pair* p2){
int tmp1 = p1->x;
p1->x = p2->x;
p2->x = tmp1;
int tmp2 = p1->y;
p1->y = p2->y;
p2->y = tmp2;
}
