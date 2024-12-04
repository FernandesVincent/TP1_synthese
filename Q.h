
#ifndef REPL_H_
#define REPL_H_



#define WELCOME "Bienvenue dans le Shell ENSEA.\nPour quitter, tapez 'exit'.\n"
#define PROMPT "enseash %  "
#define EXIT_MESSAGE "Bye Bye"
#define BUFFER_SIZE 1024

#define MSG_EXIT "[exit:%d]"
#define MSG_SIGN "[signal:%d]"


void welcome();
void prompt();
void exit_Q();
void read_message(char *buffer);
void REPL(int *status, char *command);
void write_message(const char *message, int val);
void print_status(int status);

#endif