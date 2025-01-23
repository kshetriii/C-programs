#include<stdio.h>
#include<math.h>
int main ()
{
	float value;
	float fValue , cValue;
	
	printf("Enter a float value = ");
	scanf("%f", &value);
	
	fValue = floor(value);
	cValue = ceil(value);
	
	printf(" floor value = %f \n ceiling value = %f ", fValue , cValue);
return 0;	
}
