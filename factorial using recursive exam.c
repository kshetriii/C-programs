#include<stdio.h>
int fact(int);
int main()
{
	int n,x;
	printf("enter any number:");
	scanf("%d",&n);
	x=fact(n);
	printf("the factorial of %d is %d",n,fact(n));
	return 0;
}
int fact(n)
{
	if (n==0){	
	return 1;
}
	else
	return n*fact(n-1);
}

