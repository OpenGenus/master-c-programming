#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char *ptr;
    size_t length;
    length = 50;

    /* Allocate memory for our string */
    ptr = (char *)malloc(length);

    /* Check to see if we were successful */
    if (ptr == NULL)
    {
        printf("Could not allocate required memory\n");
        exit(1);
    }
    strcpy(ptr, "C malloc at TechOnTheNet.com");
    printf("%s\n", ptr);

    /* Free the memory we allocated */
    free(ptr);

    return 0;
}