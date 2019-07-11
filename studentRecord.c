#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int rollno,sub1,sub2,sub3,sub4,total;
	float average;
	printf("Enter the roll number of the student ");
	scanf("%d",&rollno);
	printf("Enter the marks of the subject 1=");
	scanf("%d",&sub1);
	printf("Enter the marks of the subject 2=");
	scanf("%d",&sub2);
	printf("Enter the marks of the subject 3=");
	scanf("%d",&sub3);
	printf("Enter the marks of the subject 4=");
	scanf("%d",&sub4);
	total = sub1 + sub2 + sub3 + sub4;
	average=total/4;
	printf("\n The result of the  student is :");
	printf("\n The rollno of the student is : %d",rollno);
	printf("\n The marks of subject 1 is :%d",sub1);
	printf("\n The marks of subject 2 is :%d",sub2);
	printf("\n The marks of subject 3 is :%d",sub3);
	printf("\n The marks of subject 4 is :%d",sub4);
	printf("\n \n The total marks obtain is : %d",total);
	printf("\n The average mark is :%f",average);
	getch();
	return 0;
}
