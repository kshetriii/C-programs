#include<stdio.h>
#include<math.h>

int factorial (int n)
{
	int f;
	for ( f=1 ; n>1 ; n--)
	{
		f*= n;
	}
	return f;
}
int npr(int n, int r)
{
	return factorial(n)/factorial (n-r);
}
int main()
{
	int n,r;
	n=4;
	r=3;
	
	printf("%d p %d = %d\n",n,r,npr(n,r));
	return 0;
}
