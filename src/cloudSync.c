#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_LEN 1024

int main(int argc, char **argv) {
  char commitCommand[BUFFER_LEN] = "git commit -m ";
  if (argc < 2) {
    printf("Usage: ./cloudSync <Your commit comment>\n");
    printf("Example: ./cloudSync \"updated code\"\n");
    exit(0);
  }
  else if (strlen(commitCommand)+strlen(argv[1]) > BUFFER_LEN) {
    printf("Comment is too long\n");
    exit(0);
  }
  strcat(commitCommand, "\"");
  strcat(commitCommand, argv[1]);
  strcat(commitCommand, "\"");
  system("git add *");
  system(commitCommand);
  system("git push");
  return 0;
}