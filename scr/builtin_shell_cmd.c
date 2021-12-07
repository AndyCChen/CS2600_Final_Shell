#include "../includes/builtin_shell_cmd.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *builtin_str[] = {
   "cd",
   "help",
   "exit"
};

int (*builint_func[]) (char **) = {
   &lsh_cd, 
   &lsh_help,
   &lsh_exit
};

int lsh_num_builtins()
{
   return sizeof(builtin_str) / sizeof(char *);
}

int lsh_cd(char **args)
{
   if (args[1] == NULL)
   {
      fprintf(stderr, "lsh: expected argument to \"cd\"\n");
   }
   else
   {
      if (chdir(args[1]) != 0)
      {
         perror("lsh");
      }
   }
   return 1;
}

