#include<stdio.h>
int main()
{
	int a,b;
	a=20; b=30;
	printf("the numbers before swapping are %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the variables after swapping are %d and %d\n",a,b);
	
	return 0;
}
