#include <stdio.h>
typedef struct {
    int mathgrade;
    int physicsgrade;
    float chemistrygrade;
    }Student;
    int main() {
        Student obj;
        printf("Emter the math grade : ");
        scanf("%d", &obj.mathgrade);
        printf("Enter the physic grade : ");
        scanf("%d", &obj.physicsgrade);
        printf("Enter the chemistry grade : ");
        scanf("%F", &obj.chemistrygrade);
        int average =(obj.mathgrade + obj.physicsgrade + obj.chemistrygrade) / 3;
        printf("average is : %d", average);
        return 0;
        }
