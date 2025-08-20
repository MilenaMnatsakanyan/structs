#include <stdio.h>
/* #include "account.h"
int main() {
    Account ac1, ac2;

    printf("Enter the balance for the 1st acc :");
    scanf("%f", &ac1.balance);

    printf("Enter the ID for the 1st acc : ");
    scanf("%d", &ac1.ownerId);

    printf("Enter the balance for the 2nd acc :");
    scanf("%f", &ac2.balance);

    printf("Enter the ID for the 2nd acc : ");
    scanf("%d", &ac2.ownerId);

    printf("balance of ac1 : %f\n ID foe ac1 :%d\n", ac1.balance, ac1.ownerId);
    printf("balance of ac2 : %f\n ID for ac2 :  %d\n", ac2.balance, ac2.ownerId);
    
    transfer(&ac1, &ac2);

    printf("new balance of ac1  : %f\n new ID of ac1 : %d\n", ac1.balance, ac1.ownerId);
    printf("new balance of ac2 %f\n  new ID of ac2 : %d\n", ac2.balance, ac2.ownerId);
    return 0;
    } 
#include "person.h"
int main() {
    person p1,p2;
    printf("Enter the age for p1 : ");
    scanf("%d", &p1.age);
    printf("Enter the age for p2 : ");
    scanf("%d", &p2.age);
    printf("Enter the height for p1 : ");
    scanf("%f", &p1.height);
    printf("Enter the age for p2 : ");
    scanf("%f", &p2.height);
  int result = older(p1, p2);
    if(result == 1){
        printf("first person is older ");
    }
    else if(result == -1){
        printf("second person is older ");
    }
    else{
        printf("they have same age ");
    }
    return 0;
}

#include <stdio.h>
#include "temp.h"
int main() {
    temp t;
    printf("Enter the celsius : ");
    scanf("%f", &t.celsius);
    calculatefarenheit(&t);
    printf("farenheit : %f", t.farenheit);
    return 0;
}*/
