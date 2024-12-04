#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


void read_message(char *buffer) {

    ssize_t read_message = read(STDIN_FILENO, buffer, sizeof(buffer)- 1);
    buffer[read_message - 1] = '\0';

}


void REPL(int *status, char *command){
    pid_t pid = fork();

    if (pid != 0) {
        wait(status);
    }
    else {
        execlp(command, command, NULL);
        exit(1);
    }
}