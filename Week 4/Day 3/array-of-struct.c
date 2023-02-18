#include <stdio.h>

struct Employee
{
    char name[10];
    int sal;
};

int main() {

struct Employee emp[2];

for(int i = 0; i<2 ;i++){
  printf("%d employee name",i+1);
  scanf("%s",emp[i].name);
  printf("salary of %d employee",i+1);
  scanf("%d",&emp[i].sal);
}
return 0;

}