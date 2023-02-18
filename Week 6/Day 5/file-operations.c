//implementation of file-operations.h using required libraries
#include "file-operations.h"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * @brief open data_base file
 * 
 * @param file_name data_base
 * @param mode 
 * 
 * @return pointer to data_base
*/

FILE* prepare_file(char* file_name, char* mode) {

    FILE* f = fopen(file_name,mode);

    int i = 0;

    char chunk[MAX_LINE_COL];

    //move the file pointer to the first word of the dictionary
    while( i<27 ) {

    fgets(chunk, sizeof(chunk),f);

    printf("%s", chunk);

    i++;
        
    }
	
	return f;
}


/**
* @brief converts all string characters to uppercase
*
* @param target_string target string

* @return char* res converted sequence of characters
*/
char* to_upper_string(char* target_string) {
	int i = (int)strlen(target_string);
	
	char* res = (char*) malloc(sizeof(char)*(i+1));

    res[i] = '\n';
	while(i--) {
		res[i] = toupper(target_string[i]);
	}
	
	return res;
	
}


/**
 * @brief read a single line from a file
 * 
 * @param f the file to be read
 * 
 * @return char* string containing the character readed
 */
char* read_file_line(FILE* f ) {

    char chunk[MAX_LINE_COL];
    size_t len_used=0;

    char * line = (char*) malloc(sizeof(char));
    int i=0;

    line[0] = '\0';

    fgets(chunk, sizeof(chunk),f);

    len_used = strlen(chunk);

    if ( (line=realloc(line,len_used)) == NULL) {
        printf("unable to allocate memory for results\n");
        free(line);
        exit(1);
    }
    
    for (i=0; i<len_used; ++i) {
        line[i] = chunk[i];
    }
    

    return line;

}


/**
 * @brief search a word from data_base
 * 
 * @param target target word
 * 
 * @param f file to be queried
*/
int search_word(char* target, FILE *f) {


    if (f == NULL) {
        printf("An error occured during the opening of the database file\n");

        exit(1);
    }
    
    char* temp = (char*)malloc(sizeof(char));
	
    while ( ( (temp = read_file_line(f)) ) != NULL ) {
      
        if (feof(f)) break;

        if ( (strcmp(temp,target)) == 0 ) {

            return 1;
        }

    }
    
    return 0;
	    
}



/**
 * @brief check if a given line corresponds to a new word (end of the current word's definition)
 * 
 * @param temp line being read
 * 
 * @param searched_word current word
*/
int is_new_word(char* temp, char* searched_word) {

    int i=0, len = (int) strlen(temp);

    if( (len==1) && temp[0] == '\n' ) return 0; 
    
    for (i=0 ; i<len-1 ; ++i) {

        if( (int)temp[i]<65 || (int)temp[i]>90 ) return 0;
    }

    if ( strcmp(temp,searched_word) == 0 ) return 0;
    return 1;
}


/**
 * @brief print the results of a searched word
 * 
 * @param searched_word
 * 
 * @param f file searched
*/
void print_results( FILE *f , char* searched_word ) {
    
    if ( feof(f) ) {
        printf("End of file reached\n");
    }



    while ( 1 ) {

        if( feof(f) ) break;

        char* temp = read_file_line (f);


        if( is_new_word(temp,searched_word)) break;

        printf("%s", temp);
    }


}











