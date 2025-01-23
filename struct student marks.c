#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int class;
    float marks[5];
} s[5];
int main()
{
    int i,j;
    for (i=0; i<5; i++)
    {
        printf("Enter the name of student %d: ", i+1 );
        scanf("%s", s[i].name);                                         //Example: Gaurav_Rijal
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll_no );
        printf("Enter the class of student %d: ", i+1);
        scanf("%d", &s[i].class );
        printf("Enter the marks of 5 subject of student %d:\n  ", i+1 );
        for (j=0; j<5; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }
    } 
    for (i=0; i<5; i++)
    {
        printf("\nStudent %d:-\n", i+1);
        printf("Name: %s.\n", s[i].name);
        printf("Roll no.: %d.\n", s[i].roll_no);
        printf("Marks in five subjects: \n");
        for (j=0; j<5; j++)
        {
            printf("%.2f\n", s[i].marks[j]);
        }
        printf("\n");
    }
    return 0;
}
