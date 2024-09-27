#include <stdio.h>
#include <string.h>

char *removeelement(char *string, char element) {
  char *newstring = string;
  for (int i = 0; i < strlen(string); i++) {
    if (string[i] == element) {
      for (int j = i; j < strlen(string) - 1; j++) {
        string[j] = string[j + 1];
      }
      string[strlen(string) - 1] = '\0';
      i--;
    }
  }
  return newstring;
}

int main() {
  char element,string[100];
scanf("%[^\n]",string);
scanf("%c",&element);scanf("%c",&element);
  char *newstring = removeelement(string, element);

  printf("%s\n", newstring);

  return 0;
}
