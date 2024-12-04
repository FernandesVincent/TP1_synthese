#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#include "Q.h"
#include <time.h>

char buffer[128];
char command[BUFFER_SIZE] = {0};
int status = 0;

int main(){

    welcome();
    prompt();


    while(1){

        read_message(buffer);

        start_timer();
        REPL(&status, buffer);
        end_timer();
        get_time();


        if(strcmp(buffer, "exit") == 0) {
            exit_Q();
            break;
        }

        print_status(status);

    }

}
