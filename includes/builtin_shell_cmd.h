#ifndef BUILTIN_SHELL_CMD
#define BUILTIN_SHELL_CMD

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_num_builtins();

extern char *builtin_str[];
extern int (*builtin_func[]) (char **);

#endif