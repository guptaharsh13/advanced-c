// binary files are more secure
// always close any file that you open

// files - permanent storage, but without files, any memory allocated during program execution is released once the program is terminated

#include <stdio.h>

int main()
{

    FILE *file_pointer;

    // file_pointer = fopen("harsh.txt", "w"); // a for append
    // fprintf(file_pointer, "My name is Harsh Gupta");

    // w OR a - create a file if it does not exist in the path

    // read and write in all
    //  r+ - write from start, but not remove remaining content (just push the content)
    //  w+ - create the file if it does not exist, and truncate the file to 0 length
    //  a+ - create the file if it doesn't exist, read from start, but write from end

    char content[39];

    file_pointer = fopen("harsh.txt", "r"); // The file pointer should point to the file

    fscanf(file_pointer, "%s", content);

    printf("The content - %s", content);

    fclose(file_pointer); // release any resourses - file should not be kept busy when not in use

    return 0;
}