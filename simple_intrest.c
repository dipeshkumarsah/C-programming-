#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
      float t,si,r,p;
      printf("Enter time , rate and p");
      scanf("%f%f%f",&t,&r,&p);
      si=(t*r*p)/100;
      printf("the simple intrest is %f : ",si);
      getch();
	
	return 0;
}
