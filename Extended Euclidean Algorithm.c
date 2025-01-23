#include<stdio.h>
#include<math.h>

int gcdExtended( int a, int b, int *x , int*y)
{
	int x1,y1,gcd;
	if (a==0)
	{
		*x = 0;
		*y = 1;
		
		return b;
	}
	
	x1,y1;
	gcd = gcdExtended(b%a,a,&x1,&y1);
	
	*y=y1-(b/a)*x1;
	*y = x1;
	
	return gcd;
}

int main()
{
	int x,y;
	int a = 35 , b= 15;
	int g=gcdExtended(a,b,&x,&y);
	printf("gcd(%d,%d) = %d",a,b,g);
	
	return 0;
}
