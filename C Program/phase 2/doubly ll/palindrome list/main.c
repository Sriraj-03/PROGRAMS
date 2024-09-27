#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL, *current = head, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode *slow = head, *fast = head, *prev = NULL, *mid = NULL;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (fast != NULL) {
        slow = slow->next;
    }

    mid = reverseList(slow);
    struct ListNode* current = head;
    while (mid != NULL) {
        if (current->val != mid->val) {
            return false;
        }
        current = current->next;
        mid = mid->next;
    }

    return true;
}
struct ListNode* insert(struct ListNode* head, int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct ListNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

    return head;
}

int main() {
    struct ListNode* head = NULL;
int n;
char ch;
scanf("%d",&n);
for(int i=0;ch!=NULL;i++){
   scanf("%c",&ch);
   head=insert(head,ch);
}
     if (isPalindrome(head)) {
        printf("The linked list is a palindrome.\n");
    } else {
        printf("The linked list is not a palindrome.\n");
    }

    return 0;
}
