#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,square,cube;
	printf("Enter the number to calculate square and cube");
	scanf("%d",&n);
	square=n*n;
	cube=n*n*n;
	printf("\n the square is:%d \n the cube is: %d",square,cube );
	getch();
	
	return 0;
}
