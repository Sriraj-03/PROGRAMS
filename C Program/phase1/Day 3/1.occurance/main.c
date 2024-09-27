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
    int counts[size];
    for (int i = 0; i < size; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        if (counts[i] == -1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                counts[j] = -1;             }
        }
        counts[i] = count;
    }
    printf("Element Counts:\n");
    for (int i = 0; i < size; i++) {
        if (counts[i] != -1) {
            printf("%d occurs %d times\n", array[i], counts[i]);
        }
    }
    return 0;
}
