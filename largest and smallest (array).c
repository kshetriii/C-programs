#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,small,large,n;
	printf("how many numbers?");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\n enter any number %d :  ",i+1);
		scanf("%d",&arr[i]);
	}
	
	small = large = arr[0];
	for (i=1;i<n;i++)
	{
		if(arr[i]<small)
		small=arr[i];
		
		if(arr[i]>large)
		large = arr[i];
		
	}
	printf("smallest =%d \n largest =%d",small,large);
	getch();
}
