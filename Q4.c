
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#include "Q.h"


void write_message(const char *message, int val) {
    char message_to_send[BUFFER_SIZE];
    snprintf(message_to_send, sizeof(message_to_send), message, val);
    write(STDOUT_FILENO, message_to_send, strlen(message_to_send));
}

void print_status(int status) {
    if (WIFEXITED(status)) {
        write_message(MSG_EXIT, WEXITSTATUS(status));
    } else if (WIFSIGNALED(status)) {
        write_message(MSG_SIGN, WTERMSIG(status));
    }
}
