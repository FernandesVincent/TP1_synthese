#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#include "Q.h"

char buffer[128];
char command[BUFFER_SIZE] = {0};
int status = 0;


int main(){

    welcome();
    prompt();
    //print_status(status);


    while(1){

        read_message(buffer);

        REPL(&status, buffer);

        if(strcmp(buffer, "exit") == 0) {
            exit_Q();
            break;
        }

        //print_status(status);

    }
}
