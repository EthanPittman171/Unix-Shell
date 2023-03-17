#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 64

// Collect user input from terminal
char *readInputLine(void)
{
    char *line = NULL;
    size_t bufferSize = BUFFER_SIZE;

    // Use getline() to get the input of the user from the shell.
    // If getline() returns -1, either there is nothing to read
    // or an error has occurred.
    if (getline(&line, &bufferSize, stdin) == -1) {
        if (feof(stdin)) {
            exit(EXIT_SUCCESS);
        } else {
            fprintf(stderr, "\nError: Line failed to read\n");
            exit(EXIT_FAILURE);
        }
    }

    // return the input given in the terminal
    return line;
}