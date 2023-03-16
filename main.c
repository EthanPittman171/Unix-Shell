#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

char *readTerminalLine(void)
{
    char *line = NULL;
    size_t bufferSize = 0;

    // get input from terminal

    // return the input given in the terminal
    return line;
}

void shellTerminalLoop(void)
{
    char *line;
    int status;

    // read and tokenize all inputs until the status indicates that the loop should cease
    do {
        printf(">>> ");
        line = readInputLine();

        free(line);
    } while (status);
}

int main(int argc, char **argv)
{
    // Main loop used to operate the Unix Shell
    shellTerminalLoop();

    return EXIT_SUCCESS;
}