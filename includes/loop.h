// loop.h

#ifndef LOOP_H
#define LOOP_H

void lsh_loop(void);

#define LSH_RL_BUFSIZE 1024

char* lsh_read_line(void);

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

char** lsh_split_line(char *line);

int lsh_launch(char **args);

int lsh_execute(char **args);

#endif