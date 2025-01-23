#include<stdio.h>
struct student{
	int roll[5];
	char name[50];
	char address[50];
	} s[5];
	
	int main()
	{
		int i;
		for (i=0;i<5;i++)
		{
		printf("enter the details of student %d\n",i+1);
	printf("enter the roll number  \n");
	scanf("%d",&s[i].roll);
	printf("\n enter the name  \n");
	scanf("%s",s[i].name);
	printf("\n enter the address  \n");
	scanf("%s",s[i].address);
}
	for (i=0;i<5;i++)
	{
		printf("the details of student %d\n",i+1);
	printf("\nthe roll number %d ",s[i].roll);
	printf("\nthe name is %s",s[i].name);
	printf("\nthe address is %s",s[i].address);
}
return 0;
}
