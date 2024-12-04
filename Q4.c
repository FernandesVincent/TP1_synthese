
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#include "Q.h"


void write_message(char *message, int val) {
    char message_to_send = "MSG_EXIT;
    write(STDOUT_FILENO, message, sizeof(message));
}

void print_status(int status) {
    if (WIFEXITED(status)) {
        write_message(MSG_EXIT, WEXITSTATUS(status));
    }
    else if (WIFSIGNALED(status)) {
        write_message(MSG_SIGN, WTERMSIG(status));
    }
}
