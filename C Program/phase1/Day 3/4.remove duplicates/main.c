#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int unique[size];
    int uniqueCount = 0;
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (array[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = array[i];
            uniqueCount++;
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}
