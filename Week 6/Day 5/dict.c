#include "directory-operations.h"
#include "file-operations.h"
#include <string.h>

#define DATA_BASE "/mydict/data_base"
#define MODE "r"

int main( int argc , char** argv ) {

    if (argc == 2) {
        
        char* target = to_upper_string(argv[1]);
        
        //get the current home directory
        char* homedir = get_homedir();
        
        

        strcat( homedir , DATA_BASE );



        FILE *f = prepare_file( homedir , MODE );

        
        //if the search result is successfull
        if ( search_word(target,f) ){
        
        //print the word searched
        printf("%s", target);
        

        //print the definitions for the word searched
        print_results(f,target);


        fclose(f);

        }
        else {

            printf("No definitions found for : %s", target);
        }

    }
    else {
        printf("mydict [word]\n");
    }

    
    return 0;

}
