#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    // STEP 1: READING THE FILES
    int source_file = open("input.txt", O_RDONLY);
    off_t fileLength = lseek(source_file, 0, SEEK_END);
    int dest_file = open("output.txt", O_CREAT | O_RDWR | O_TRUNC, 0600);
    if (source_file < 0 || dest_file < 0 || fileLength <= 0)
    {
        write(1, "Error in file operations", 25);
        exit(1);
    }
    // STEP 2: REPOSITION THE FILE DESCRIPTOR OFFSETS
    lseek(dest_file, 0, SEEK_SET);
    lseek(source_file, -1, SEEK_END);
    // STEP 3: SET THE CHUNK SIZE
    int pref_byte_size = fileLength / 500;
    int no_of_bytes_per_read = (pref_byte_size == 0) ? 1 : pow(2, (int)(log((double)(pref_byte_size)) / log(2.0)));
    // STEP 4: DEFINE THE CHARACTER POINTERS TO STORE THE READ CHUNK AND THE REVERSED CHUNK
    char *c, *r;
    c = (char *)malloc(no_of_bytes_per_read);
    r = (char *)malloc(no_of_bytes_per_read);
    // STEP 5: SET START LOCATION AND THE INITIAL LENGTH TO MOVE
    int start = ((fileLength - 1) / no_of_bytes_per_read) * no_of_bytes_per_read;
    int length_to_move = fileLength - start;
    lseek(source_file, start, SEEK_SET);
    printf("\nFileLength: %lld \nNo of bytes per read: %d \nStart: %d \nChunk Size: %d\n\n", fileLength, no_of_bytes_per_read, start, length_to_move);
    // STEP 6: THE MAIN LOOP
    while (1)
    {
        // STEP 6.1: Read `length_to_move` bytes from `source_file` and store in `c`
        printf("\nLocation: %lld\tLength read: %d\t", lseek(source_file, 0, SEEK_CUR), length_to_move);
        read(source_file, c, length_to_move);
        printf("Read %s\t", c);
        // STEP 6.2: Reverse the contents of `c` and store in `r`
        for (int begin = 0, end = length_to_move - 1; begin < length_to_move; begin++, end--)
            r[begin] = c[end];
        r[length_to_move] = '\0';
        // STEP 6.3: Write `r` to the `dest_file`
        printf("Write: %s\t", r);
        fflush(stdout);
        write(dest_file, r, length_to_move);
        // STEP 6.4: Check if there are any more chunks to read
        if (lseek(source_file, 0, SEEK_CUR) - no_of_bytes_per_read - length_to_move < 0)
            break;
        // STEP 6.5: Move the `source_file` to the start of the previous chunk
        lseek(source_file, -no_of_bytes_per_read - length_to_move, SEEK_CUR);
        length_to_move = no_of_bytes_per_read;
    }
    write(1, "\nDone\n", 5);
    // STEP 7: CLOSING THE FILES
    close(source_file);
    close(dest_file);
    return 0;
}