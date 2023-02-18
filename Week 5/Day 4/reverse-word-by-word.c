#include<stdio.h>
void reverse_string(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[]="reverse this string word by word";
    int start, end;
    end=0;
    start=0;
    while(str[end])
    {
        for(end=start;str[end]&&str[end]!=' ';end++);
        reverse_string(str, start, end-1);
        start=end+1;
    }
        printf("%s ",str);
    return 0;
}