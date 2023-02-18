#include<stdio.h>
int main()
{
     int a,b,c,d,e;
     printf("Enter a 3 digit number=");
     scanf("%d",&a);
     b=a/100;
     c=(a/10)-(b*10);
     d=a-(b*100)-(c*10);
     printf("%d\n",b);
     printf("%d\n",c);
     printf("%d\n",d);
     e=b+c+d;
     printf("%d+%d+%d=%d\n",b,c,d,e);
     return 0;
}