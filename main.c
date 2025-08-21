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


#include "temp.h"
int main() {
    temp t;
    printf("Enter the celsius : ");
    scanf("%f", &t.celsius);
    calculatefarenheit(&t);
    printf("farenheit : %f", t.farenheit);
    return 0;
}

#include "circle.h"
int main() {
    circle c;
    printf("Enter the radius : ");
    scanf("%f", &c.radius);
    areacirc(&c);
    printf("area of circle is : %f\n", c.area);
    printf("circumference of circle is : %f", c.circumference);
    return 0;
    
}
#include <stdio.h>
#include "rational.h"
int main() {
	rational n1, n2;
	printf("Enter the numerator of first number : ");
	scanf("%d", &n1.numerator);
	printf("Enter the denominator of first number : ");
	scanf("%d", &n1.denominator);
	printf("Enter the numerator of second number : ");
	scanf("%d", &n2.numerator);
	printf("Enter the denominator of second number : ");
	scanf("%d", &n2.denominator);
	rational res = sum(&n1, &n2);	
	printf("denominator n1 is :  %d\n", res.numerator);
	printf("numerator n1 is : %d\n",res.denominator); 
	rational res2 = product(&n1, &n2);
	printf("numerator n2 is : %d\n", res2.numerator);
	printf("denominator n2 is : %d", res2.denominator);
return 0;
}

#include <stdio.h>
#include "rational.h"
int main() {
	rational n1, n2;
	printf("Enter the numerator of first number : ");
	scanf("%d", &n1.numerator);
	printf("Enter the denominator of first number : ");
	scanf("%d", &n1.denominator);
	printf("Enter the numerator of second number : ");
	scanf("%d", &n2.numerator);
	printf("Enter the denominator of second number : ");
	scanf("%d", &n2.denominator);
	rational res = sum(&n1, &n2);	
	printf("denominator n1 is :  %d\n", res.numerator);
	printf("numerator n1 is : %d\n",res.denominator); 
	rational res2 = product(&n1, &n2);
	printf("numerator n2 is : %d\n", res2.numerator);
	printf("denominator n2 is : %d", res2.denominator);
return 0;
}

#include <stdio.h>
#include "pair.h"
int main() {
	pair p1, p2;
	printf("Enter the x for p1 :");
	scanf("%d", &p1.x);
	printf("Enter the y for p1 :");
	scanf("%d", &p1.y);
	printf("Enter the x for p2 : ");
	scanf("%d", &p2.x);
	printf("Enter the y for p2 : ");
	scanf("%d", &p2.y);
	swap(&p1, &p2);
	printf("%d\n", p1.x);
	printf("%d\n", p1.y);
	printf("%d\n", p2.x);
	printf("%d\n", p2.y);
return 0;
}
*/
