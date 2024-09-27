#include <stdio.h>
#include <ctype.h>

int validate_password(char *password) {
  int length = 0;
  int char_count = 0;
  int upper_case_count = 0;
  int number_count = 0;
  int special_char_count = 0;

  while (password[length] != '\0') {
    length++;

    if (isalpha(password[length])) {
      char_count++;
      if (isupper(password[length])) {
        upper_case_count++;
      }
    } else if (isdigit(password[length])) {
      number_count++;
    } else if (ispunct(password[length])) {
      special_char_count++;
    }
  }

  if (length >= 8 && char_count >= 4 && upper_case_count >= 1 && number_count >= 1 && special_char_count >= 1) {
    return 0;
  } else {
    return 1; 
  }
}

int main() {
  char password[100];

  printf("Enter a password: ");
  scanf("%s", password);

  int validation_result = validate_password(password);

  if (validation_result == 0) {
    printf("Valid password.\n");
  } else {
    printf("Invalid password.\n");
  }

  return 0;
}
