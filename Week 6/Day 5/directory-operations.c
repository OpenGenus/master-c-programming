//implementation of directory-operations.h
#include "directory-operations.h"


/**
 * @brief get value of home directory
 * @return a pointer containing the value of the current home directory
*/
char* get_homedir(){
    char *homedir;
    if ((homedir = getenv("HOME")) == NULL) {
        homedir = getpwuid(getuid())->pw_dir;

    }
    return homedir;
}
