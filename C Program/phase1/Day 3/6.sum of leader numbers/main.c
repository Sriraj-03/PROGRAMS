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
    int leaderSum = 0;
    int leader = array[size - 1];
   for (int i = size - 1; i >= 0; i--) {
        if (array[i] > leader) {
            leader = array[i]; 
        }
        if (array[i] == leader && leader > 0) {
            leaderSum += leader; 
        }
    }
    printf("Sum of leader numbers: %d\n", leaderSum);
    return 0;
}
