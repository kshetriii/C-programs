#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter a number:  \n");
	scanf("%d",&a);
	printf("enter a number:  \n");
	scanf("%d",&b);
	sum = a+b;
	printf("the sum of %d and %d is %d.",&a,&b,&sum);
	return 0;
}
