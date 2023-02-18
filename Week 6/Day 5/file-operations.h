//declarations for functions related to data_base
#include <stdio.h>

//maximum column number for a line in data_base
#define MAX_LINE_COL 100



FILE* prepare_file(char* file_name, char* mode);



char* to_upper_string(char* target_string);



char* read_file_line(FILE* f );



int search_word(char* target , FILE *f);



int is_new_word(char* temp, char* searched_word);



void print_results( FILE *f , char* searched_word );