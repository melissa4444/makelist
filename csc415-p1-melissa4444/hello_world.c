//PROJECT1
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//You may also add more include directives as well.

#define NAME "Melissa"

int
main(int argc, char const *argv[])
{
    char* msg;
    int bytes_formatted, bytes_written;
    msg = malloc(sizeof(char)*128);
    bytes_formatted = sprintf(msg, "CSC 415, This program has been written by %s! \n" ,NAME);
    if(bytes_formatted < 0)
    {
        perror("Error in write sprintf call ");
        return 42;
    }
    bytes_written = write(1, msg, bytes_formatted);
    if(bytes_written < 0)
    {
        perror("Error in write system call ");
        return 43;
    }
    
    return 0;
}
