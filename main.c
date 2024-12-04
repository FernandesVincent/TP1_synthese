#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#include "Q.h"
#include <time.h>

char buffer[128];
int status = 0;
char* argv[BUFFER_SIZE];


int main(){

    welcome();
    prompt();


    while(1){

        read_message(buffer);
        split_string(buffer, argv);


        start_timer();
        REPL(&status, buffer);
        complex_command(argv, &status);
        end_timer();
        get_time();


        if(strcmp(buffer, "exit") == 0) {
            exit_Q();
            break;
        }

        print_status(status);

    }

}
