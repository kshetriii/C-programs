#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],mul[3][3],i,j,k;
	printf("enter the first matrix \n");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
		}	
	}
	printf("enter the second matrix \n");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
	scanf("%d",&b[i][j]);
		}	
	}
mul[i][j]=0;
printf("the multiplication of the matrices are  ");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
for (k=0;k<3;k++)
{
mul[i][j] += a[i][j]*b[k][j];
		}	
printf("\t%d\t",mul[i][j]);
	}
printf("\n");
}

return 0;
}
