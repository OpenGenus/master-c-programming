#include <stdio.h>

struct Student
{
    // here additionalInfo is a structure
    struct additionaInfo
    {
        char address[20];
        char parentsname[30];
        int mobileno;
        
    }info;
    
    char collegeId[10];
    char name[10];
    int age;
    
} stu;

int main()
{
printf("Give Student college id:");
scanf("%s",stu.collegeId);
printf("Give Student Name:");
scanf("%s",stu.name);
printf("Give Student age:");
scanf("%d",stu.age);
printf("Give Student address:");
scanf("%s",stu.info.address);
printf("Give Student parentsName:");
scanf("%s",stu.info.parentsname);
printf("Give Student mobileno:");
scanf("%d",stu.info.mobileno);

return 0;

}