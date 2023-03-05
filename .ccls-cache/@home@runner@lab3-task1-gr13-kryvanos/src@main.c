/* hello.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *buffer;
  size_t bufsize = 32;
  size_t characters;
  buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
  characters = getline(&buffer, &bufsize, stdin);
  for (int i = 0; i < strlen(buffer) - 1; i++) {
    printf("%c ", buffer[i]);
    printf("%d \n", buffer[i]);
  }
  free(buffer);
  return 0;
}
