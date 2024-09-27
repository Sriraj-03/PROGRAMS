#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertEnd(struct Node** head, int data) {
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

struct Node* mergeLinkedListsByPositions(struct Node* head1, struct Node* head2) {
    struct Node* mergedHead = NULL;
    struct Node* current1 = head1;
    struct Node* current2 = head2;

    while (current1 != NULL || current2 != NULL) {
        if (current1 != NULL) {
            insertEnd(&mergedHead, current1->data);
            current1 = current1->next;
        }
        if (current2 != NULL) {
            insertEnd(&mergedHead, current2->data);
            current2 = current2->next;
        }
    }

    return mergedHead;
}

void printLinkedList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    int n, m;
    int data;

    printf("first linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertEnd(&head1, data);
    }

    printf("second linked list: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &data);
        insertEnd(&head2, data);
    }

    struct Node* mergedHead = mergeLinkedListsByPositions(head1, head2);

    printf("The merged linked list is: ");
    printLinkedList(mergedHead);

    return 0;
}
