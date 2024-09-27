#include <stdio.h>

int main() {
    int S;
    scanf("%d",&S);
    S++;
    int r[S]; 
    int no, i;

    printf("Enter the number, enter -1 to finish: ");
    scanf("%d", &no);
    while (no != -1) {
        r[no - 0] = 1;
        scanf("%d", &no);
    }

    printf("The missing number is: ");
    for (i = 1; i <= S; i++) {
        if (r[i] == 0) {
            printf("%d ", i); 
        }
    }
    printf("\n");

    return 0;
}