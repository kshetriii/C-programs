#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("enter any number ");
	scanf("%d",&n);
	printf("the sum of first %d numbers is %d ",n,sum(n));
return 0;
}
int sum(int n)
{
	if(n==0)
	return 0;
	else 
	return (n + sum(n-1));
}
