#include <stdio.h>
#define MAX_DEPTS 3 
#define MAX_SEATS 2 
struct Student {
    char name[50];
    int id;
};
struct Department {
    char name[50];
    union {
        struct Student students[MAX_SEATS];
        int seats_filled;
    } data;
};

int main() {
    struct Department departments[MAX_DEPTS];
    for (int i = 0; i < MAX_DEPTS; i++) {
        printf("Enter details for department %d:\n", i+1);
        printf("Department name: ");
        scanf("%s", departments[i].name);
        departments[i].data.seats_filled = 0;
        for (int j = 0; j < MAX_SEATS; j++) {
            printf("Enter details for student %d:\n", j+1);
            printf("Student name: ");
            scanf("%s", departments[i].data.students[j].name);
            printf("Student ID: ");
            scanf("%d", &departments[i].data.students[j].id);
            departments[i].data.seats_filled++;
        }
    }
    for (int i = 0; i < MAX_DEPTS; i++) {
        printf("\nDepartment: %s\n", departments[i].name);
        for (int j = 0; j < departments[i].data.seats_filled; j++) {
            printf("Student %d: Name - %s, ID - %d\n", 
                   j+1, departments[i].data.students[j].name, departments[i].data.students[j].id);
        }
    }

    return 0;
}
