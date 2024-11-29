#include<stdio.h>
#include<string.h>
struct Student
{
    int Roll_No;
    char name[31];
    char fname[31];
    char mname[31];
    int maths;
    int phy;
    int chem;
    int hindi;
    int eng;
}s;

int main()
{
    int total;
    printf("Enter Roll No :");
    scanf("%d",&s.Roll_No);
    printf("Enter your Name :");
    scanf("%s",s.name);
    printf("Enter your father's name :");
    scanf("%s",s.fname);
    printf("Enter your mother's name :");
    scanf("%s",s.mname);
    printf("Enter your maths marks");
    scanf("%d",&s.maths);
    printf("Enter your physics marks");
    scanf("%d",&s.phy);
    printf("Enter your chemistery marks");
    scanf("%d",&s.chem);
    printf("Enter your hindi marks");
    scanf("%d",&s.hindi);
    printf("Enter your english marks");
    scanf("%d",&s.eng);
    
    total=s.maths+s.phy+s.chem+s.eng+s.hindi;

    printf("\t\t MARKSHEET OF CLASS 12th \n");
    printf("***************************************** \n");
    printf("\t\t CBSE BOARD \n");
    printf("Roll No :\t %d \n",s.Roll_No);
    printf("Name :\t %s \n",s.name);
    printf("Father Name :\t %s \n",s.fname);
    printf("Mother Name :\t %s \n",s.mname);
    printf("***************************************** \n");

    printf("S.NO\tSUBJECT\tMARKS OBT\tTOTAL\n");
    printf("1   \tMATHS  \t%d       \t100\n",s.maths);
    printf("2   \tPHYSICS\t%d       \t100\n",s.phy);
    printf("3   \tCHEM   \t%d       \t100\n",s.chem);
    printf("4   \tHINDI  \t%d       \t100\n",s.hindi);
    printf("5   \tENGLISH\t%d       \t100\n",s.eng);
    printf("\t\tTOTAL MARKS :\t%d",total);
    float percent;
    percent =(float)(total*100)/500;
    char result[7];
    if(s.chem<40||s.eng<40||s.hindi<40||s.maths<40||s.phy<40)
     strcpy(result,"FAIL");
    else
     strcpy(result,"PASS");
    char divison[10];
    if(percent>=60)
     strcpy(divison,"FIRST");
    else if(percent>45 && percent<60)
     strcpy(divison,"SECOND");
    else if(percent>40 && percent<45)
     strcpy(divison,"THIRD");
    else
     strcpy(divison,"*****");
    printf("\n\t\t RESULT : \t%s(%s)DIVISION",result,divison);
    return 0;

}
