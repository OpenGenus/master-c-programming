#include <stdio.h>
#include <string.h>
int main()
{
    //example of strlen
    char str[]="Programming";
    int l=strlen(str);                      
    printf("Length of the string : %d\n",l);
    
    //example of strcat
    char str1[10]="Open", str2[10]="Genus";     
    printf("\nConcatenated String : %s\n\n",strcat(str1,str2));
    
    //exmple of strcmp
    char s1[]="SAM", s2[]="Sam";
    int val=strcmp(s1,s2);
    if(val==0) printf("s1 and s2 are equal.");
    else if(val>0) printf("s1 is greater than s2.");
    else printf("s2 is greater than s1.");
    
    //example of strcpy
    printf("\n\nCopied string : %s ",strcpy(str1,str2));
    printf("\nstr1=%s , str2=%s\n\n",str1,str2); //value of str1 changes
    
    //example of strstr
    char string[55] ="This is a test string";
    char *p = strstr(string,"test");
    if(p)
    {
        printf("string found\n");
        printf("String \"test\" in \"%s\" is \"%s\"\n\n" ,string, p);
    }
    else    printf("string not found\n" );
    
    //example of strtok
    char s[] = "Problem_Solving_in_C";
    char* token = strtok(s, "_");   //Returns first token
    while (token != NULL) //Keep printing tokens while one of the delimiters present in s[].
    {
        printf("%s\n", token); 
        token = strtok(NULL, "_");
    }
    return 0;
}