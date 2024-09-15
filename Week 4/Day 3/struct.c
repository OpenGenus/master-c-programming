#include<stdio.h>
#include<string.h>  // Include for strcpy()

struct Student
{
    char name[25];
    int age;
    char branch[10];
    // F for female and M for male
    char gender;
};

int main()
{
    struct Student s1;
    
    // Assigning values to the members of s1 using dot(.) operator
    s1.age = 18;
    strcpy(s1.name, "John");
    strcpy(s1.branch, "C.S.E");  
    
    /*
        Displaying the stored values
    */
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);
    printf("Branch of Student 1: %s\n", s1.branch);
    printf("Gender of Student 1: %c\n", s1.gender);
    
    return 0;
}
