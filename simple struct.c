#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[30];
}s;

int main()
{
    printf("Enter the Roll No :");
    scanf("%d",&s.rollno);
    printf("Enter Your Name :");
    scanf("%s",s.name);
    printf("****************************************\n");
    printf("ROLL NO\t\tNAME\n");
    printf("%d\t\t%s",s.rollno,s.name);

    return 0;

}
