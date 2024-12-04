#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "Q.h"

void complex_command(char **argv, int *status) {
    pid_t pid = fork();

    if (pid != 0) {
        wait(status);
    }
    else {
        execvp(argv[0], argv);
        exit(1);
    }
}

void split_string(char *buffer, char **argv) {
    int i = 0;
    char *token = strtok(buffer, " ");

    for (i = 0; token != NULL; i++) {
        argv[i] = token;
        token = strtok(NULL, " ");
    }
    argv[i] = NULL;
}

