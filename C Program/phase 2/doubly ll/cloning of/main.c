#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data  = data;
    newNode->next = NULL;

    if (*head == NULL) {
       *head = newNode;
       return;
    }

    struct Node* last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
}
struct Node* cloneList(struct Node* head) {
    if (head == NULL)
        return NULL;

    struct Node* newHead = (struct Node*) malloc(sizeof(struct Node));
    newHead->data = head->data;
    newHead->next = cloneList(head->next);

    return newHead;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    int n,ch;
     struct Node* head1 = NULL, *head2 = NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
   scanf("%d",&ch);
   
    insertEnd(&head1, ch);}
    head2 = cloneList(head1);

    printf("Original List: ");
    printList(head1);

    printf("\nCloned List: ");
    printList(head2);

    return 0;
}

