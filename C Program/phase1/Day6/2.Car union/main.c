#include <stdio.h>
#include <string.h>

#define N 10 // Number of cars
struct Car {
    char model_name[50];
    int no_of_seats;
    char driver_name[50];
};

int main() {
    struct Car cars[N];
    for (int i = 0; i < N; i++) {
        printf("Enter details for car %d:\n", i+1);
        printf("Model name: ");
        scanf("%s", cars[i].model_name);
        printf("Number of seats: ");
        scanf("%d", &cars[i].no_of_seats);
        printf("Driver name: ");
        scanf("%s", cars[i].driver_name);
    }
    int passengers;
    printf("Enter the number of passengers: ");
    scanf("%d", &passengers);
    for (int i = 0; i < N; i++) {
        if (cars[i].no_of_seats >= passengers) {
            printf("Car %s with driver %s can accommodate %d passengers.\n", 
                   cars[i].model_name, cars[i].driver_name, passengers);
            break;
        }
    }

    return 0;
}
