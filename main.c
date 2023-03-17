#include <stdio.h>
#include <stdlib.h>

#include "shell.h"

void shellTerminalLoop(void)
{
    char *line;
    char **tokens;
    int status;

    // read and tokenize all inputs until the status indicates that the loop should cease
    do {
        printf("$ ");
        line = readInputLine();
        printf("%s", line);
        // tokens = parseInput(line);

        free(line);

    } while (status);
}

int main(int argc, char **argv)
{
    // Main loop used to operate the Unix Shell
    shellTerminalLoop();

    return EXIT_SUCCESS;
}