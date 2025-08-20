#include "person.h"
int older(person p1, person p2){
    if(p1.age > p2.age){
        return 1;
    }
    else if(p1.age < p2.age){
        return -1;
    }
    else {
        return 0;
    }
}
