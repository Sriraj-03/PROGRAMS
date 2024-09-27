#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Node {
  char data;
  struct Node* next;
};

void insertEnd(struct Node** head, char data) {
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    return;
  }

  struct Node* last = *head;
  while (last->next != NULL) {
    last = last->next;
  }

  last->next = newNode;
}

struct Node* cloneList(struct Node* head) {
  if (head == NULL) {
    return NULL;
  }

  struct Node* newHead = (struct Node*) malloc(sizeof(struct Node));
  newHead->data = head->data;
  newHead->next = cloneList(head->next);

  return newHead;
}

void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %c ", node->data);
    node = node->next;
  }
}

int isPalindrome_(struct Node* head) {
  struct Node* slow = head;
  struct Node* fast = head;

  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  struct Node* reversedHead = NULL;
  while (slow != NULL) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = slow->data;
    newNode->next = reversedHead;
    reversedHead = newNode;
    slow = slow->next;
  }

  struct Node* currentNode = reversedHead;
  while (currentNode != NULL && head != NULL) {
    if (currentNode->data != head->data) {
      return 0;
    }
    currentNode = currentNode->next;
    head = head->next;
  }

  return 1;
}

int main() {
  char string[100];
  struct Node* head = NULL;

  printf("Enter a string: ");
  scanf("%s", string);

  for (int i = 0; i < strlen(string); i++) {
    insertEnd(&head, string[i]);
  }

  int isPalindrome = isPalindrome_(head);

  if (isPalindrome) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }

  return 0;
}
