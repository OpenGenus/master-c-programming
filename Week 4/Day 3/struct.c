#include<stdio.h>

struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
};

int main()
{
    struct Student s1;
    
 // s1 is a variable of Student type and 
// age,name,branch,gender is a member of StudeNT and assigning values to them  using // dot(.)operator
        
    s1.age = 18;
    s1.name = "John";
    s1.branch = "C.S.E";
    s1.gender = "F";
    
    /*
        displaying the stored values
    */
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);
    printf("Branch of Student 1: %s\n", s1.branch);
    printf("Gender of Student 1: %s\n", s1.gender);
    
    return 0;
}