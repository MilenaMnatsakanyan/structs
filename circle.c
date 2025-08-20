#include "circle.h"
void areacirc(circle *c){
    c -> area = 2 * 3.14 * c -> radius;
    c -> circumference = c -> radius * c -> radius * 3.14;
}
