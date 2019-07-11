#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 float radius,area;
	 printf("Enter the value of radius");
	 scanf("%f",&radius);
	 area = (22/7)*radius*radius;
	 
	 printf("The area of circle is  %f",area);
	return 0;
}
