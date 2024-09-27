#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of Array 1: ");
    scanf("%d", &size1);
    printf("Enter the size of Array 2: ");
    scanf("%d", &size2);
    if (size1 <= 0 || size2 <= 0) {
        printf("Array sizes must be greater than 0.\n");
        return 1;
    }
    int array1[size1], array2[size2];
    printf("Enter the elements of Array 1:\n");
    for (int i = 0; i < size1; scanf("%d", &array1[i++]));
    printf("Enter the elements of Array 2:\n");
    for (int i = 0; i < size2; scanf("%d", &array2[i++]));
    printf("Unique numbers in Array 1: ");
    for (int i = 0; i < size1; i++) {
        int isUnique = 1;
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) printf("%d ", array1[i]);
    }
    printf("\n");
    printf("Unique numbers in Array 2: ");
    for (int i = 0; i < size2; i++) {
        int isUnique = 1;
        for (int j = 0; j < size1; j++) {
            if (array2[i] == array1[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;
}
