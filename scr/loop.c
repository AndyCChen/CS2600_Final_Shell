#include "../includes/loop.h"
#include <stdio.h>
#include <stdlib.h>

void lsh_loop(void)
{
   char *line;
   char **args;
   int status;

   do
   {
      printf("> ");




   } while (status);
   
}

char* lsh_read_line(void)
{
   int bufsize = LSH_RL_BUFSIZE;
   int position = 0;
   char *buffer = malloc(sizeof(char) * bufsize);
   int c;

   if (!buffer)
   {
      fprintf(stderr, "lsh: allocation error\n");
      exit(EXIT_FAILURE);
   }

   while (1)
   {
      c = getchar();

      if (c == EOF || c == '\n')
      {
         buffer[position] = '\0';
         return buffer;
      }
      else
      {
         buffer[position] = c;
      }

      position++;

      if (position >= LSH_RL_BUFSIZE)
      {
         bufsize += LSH_RL_BUFSIZE;
         buffer = realloc(buffer, bufsize);

         if (!buffer)
         {
            fprintf(stderr, "lsh: allocation error\n");
            exit(EXIT_FAILURE);
         }
      }
   }
}