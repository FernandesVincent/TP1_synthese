#include <string.h>
#include <unistd.h>

#include "Q.h"


void exit_Q() {
        write(STDOUT_FILENO, EXIT_MESSAGE, strlen(EXIT_MESSAGE));
}