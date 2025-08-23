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
#include <stdio.h>
#include "person.h"
int main() {
	person p;
	printf("Enter your height : ");
	scanf("%f", &p.height);
	printf("Enter your weight : ");
	scanf("%f", &p.weight);
	
	int result = bmiper(&p);
	if(result == 1){
		printf("Overweight");
	}
	else if(result == 0){
		printf("Normal");
	}
	else if(result == -1) {
	printf("Underweight");
	}
return 0;
}
#include <stdio.h>
#include "number.h"
int main() {
	number n;
	 assign(&n);
	printf("int Value is %d\n", n.intValue);
	printf("float avlue is%f", n.floatValue);
return 0;  
		
}
#include "data.h"
int main() {
	data d;
	assigndata(&d);
	printf("int Value is %d\n", d.intValue);
	printf("char value is : %c", d.charValue);
return 0;  
		
}

#include "value.h"
int main() {
	value v;
	intrepres(&v);
	printf("float value is : %f\n", v.floatValue);
	printf("int value is : %d", v.intValue);
return 0;
		
}
#include "measurement.h"
int main() {
	measurement m;
	int a;
	printf("Enter 1 if you want to enter height : \nEnter 2 if you want to enter weight : ");
	scanf("%d", &a);
	if(a == 1 || a == 2){
		print(&m, a);
}
	
	return 0;
		
}
#include "flag.h"
int main() {
	flag f;
	assignnum(&f);
	printf(" %c", f.flag);
return 0;
}
#include "time.h"
int main() {
	time t;
	
	print(&t);
	printf("%f", t.s.totalHours);
return 0;
}
#include "currency.h"
int main() {
	currency c;
	assigncurrency(&c);
	printf("usd is : %f\n", c.usd);
	printf("eur is : %f", c.eur);
return 0;
}
#include "seasons.h"
int main() {
	SEASONS month;
	printf("Enter the season : for winter 0 , for spring 1 , for summer 2 , for fall 3\n");
	int num = 0;
	do{
		scanf("%d",&num);
	}
	while(num < 0 || num > 3);
	getnum(num);
	return 0;
}


*/
