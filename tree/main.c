#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Define the structure of a tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Global tree root
struct node* root = NULL;

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insert(struct node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) return root;
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function to search for a node in the tree
struct node* search(struct node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (root->data < key) {
        return search(root->right, key);
    }
    return search(root->left, key);
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d -> ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d -> ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d -> ", root->data);
    }
}

// Function to calculate the height of the tree
int height(struct node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}

// Function to perform level order traversal
void printGivenLevel(struct node* root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", root->data);
    } else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder(struct node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printGivenLevel(root, i);
    }
}

// Function to check if the tree is balanced
bool isBalanced(struct node* root) {
    int lh;
    int rh;
    if (root == NULL) {
        return true;
    }
    lh = height(root->left);
    rh = height(root->right);
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) {
        return true;
    }
    return false;
}
// Function to print the left boundary of the tree
void printLeftBoundary(struct node* root) {
    if (root) {
        if (root->left) {
            printf("%d -> ", root->data);
            printLeftBoundary(root->left);
        } else if (root->right) {
            printf("%d -> ", root->data);
            printLeftBoundary(root->right);
        }
    }
}

// Function to print the leaf nodes of the tree
void printLeaves(struct node* root) {
    if (root) {
        printLeaves(root->left);
        if (root->left == NULL && root->right == NULL) {
            printf("%d -> ", root->data);
        }
        printLeaves(root->right);
    }
}

// Function to print the right boundary of the tree
void printRightBoundary(struct node* root) {
    if (root) {
        if (root->right) {
            printRightBoundary(root->right);
            printf("%d -> ", root->data);
        } else if (root->left) {
            printRightBoundary(root->left);
            printf("%d -> ", root->data);
        }
    }
}

// Function to print the boundary elements of the tree
void printBoundary(struct node* root) {
    if (root) {
        printf("%d -> ", root->data);

        // Print the left boundary in top-down manner
        printLeftBoundary(root->left);

        // Print all leaf nodes
        printLeaves(root->left);
        printLeaves(root->right);

        // Print the right boundary in bottom-up manner
        printRightBoundary(root->right);
    }
}


int main() {
    // Inserting nodes into the tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal: ");
    inorder(root);
    printf("NULL\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("NULL\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("NULL\n");

    printf("Level order traversal: ");
    printLevelOrder(root);
    printf("\n");

    printf("Boundary traversal: ");
    printBoundary(root);
    printf("NULL\n");

    // Searching for a node
    int key = 40;
    struct node* searchResult = search(root, key);
    if (searchResult != NULL) {
        printf("Node %d found in the tree.\n", key);
    } else {
        printf("Node %d not found in the tree.\n", key);
    }

    // Deleting a node
    key = 20;
    root = deleteNode(root, key);
    printf("Inorder traversal after deleting %d: ", key);
    inorder(root);
    printf("NULL\n");

    // Checking if the tree is balanced
    if (isBalanced(root)) {
        printf("The tree is balanced.\n");
    } else {
        printf("The tree is not balanced.\n");
    }

    return 0;
}

