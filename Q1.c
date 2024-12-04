#include <string.h>
#include <unistd.h>
#include "Q.h"

void welcome() {
    write(STDOUT_FILENO, WELCOME, strlen(WELCOME));
}

void prompt() {
    write(STDOUT_FILENO, PROMPT, strlen(PROMPT));
}


