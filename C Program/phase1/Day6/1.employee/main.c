#include <stdio.h>
#define N 10 
#define BONUS_PERCENTAGE 0.1 
struct Employee {
    char name[50];
    int id;
    double salary;
};
int main() {
    struct Employee employees[N];
for (int i = 0; i < N; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }
  for (int i = 0; i < N; i++) {
        if (employees[i].id < 10) {
            employees[i].salary += employees[i].salary * BONUS_PERCENTAGE;
            printf("Employee %s with ID %d received a bonus. New salary: %.2lf\n", 
                   employees[i].name, employees[i].id, employees[i].salary);
        }
    }

    return 0;
}
