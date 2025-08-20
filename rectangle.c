#include <stdio.h>

typedef struct {
    int lenght;
    int width;
} Rectangle;

 int main() {
    Rectangle obj;
    printf("Enter the lenght : ");
    scanf("%d", &obj.lenght);
    printf("Enter the width : ");
    scanf("%d", &obj.width);
    int area = obj.lenght *obj. width;
    int perimetr = (obj.lenght * 2) + (obj.width * 2);
    printf("area is : %d", area);
    printf("perimter is : %d", perimetr);
    return 0;
    }
