#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  fgets(str,100,stdin);
  char reversed_str[100];

  char *words[100];
  int num_words = 0;
  char *token = strtok(str, " ");
  while (token != NULL) {
    words[num_words] = token;
    num_words++;
    token = strtok(NULL, " ");
  }

  int i;
  for (i = num_words - 1; i >= 0; i--) {
    strcat(reversed_str, words[i]);
    if (i > 0) {
      strcat(reversed_str, " ");
    }
  }

  printf("%s\n", reversed_str);

  return 0;
}
