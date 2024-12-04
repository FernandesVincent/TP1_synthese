
#ifndef REPL_H_
#define REPL_H_



#define WELCOME "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\n"
#define PROMPT "enseash %  "
#define EXIT_MESSAGE "Bye Bye"
#define BUFFER_SIZE 1024

#define MSG_EXIT "[exit:%d] "
#define MSG_SIGN "[signal:%d] "

#define TIME_MSG "[time:%d in ms]"



void welcome();
void prompt();
void exit_Q();
void read_message(char *buffer);
void REPL(int *status, char *command);
void write_message(const char *message, int val);
void print_status(int status);
void print_time(int time);
void start_timer();
void end_timer();
int get_time();
void complex_command(char **argv, int *status);
void split_string(char *buffer, char **argv);

#endif