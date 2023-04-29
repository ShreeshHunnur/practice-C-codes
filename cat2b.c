#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 50

struct employee {
    char name[50];
    int age;
    char position[50];
    char doj[11];
};

int compare_by_name(const void* a, const void* b) {
    struct employee* emp1 = (struct employee*)a;
    struct employee* emp2 = (struct employee*)b;
    return strcmp(emp1->name, emp2->name);
}

int compare_by_doj(const void* a, const void* b) {
    struct employee* emp1 = (struct employee*)a;
    struct employee* emp2 = (struct employee*)b;
    int doj1[3], doj2[3];
    sscanf(emp1->doj, "%d/%d/%d", &doj1[0], &doj1[1], &doj1[2]);
    sscanf(emp2->doj, "%d/%d/%d", &doj2[0], &doj2[1], &doj2[2]);
    if (doj1[2] == doj2[2]) {
        if (doj1[1] == doj2[1]) {
            return doj1[0] - doj2[0];
        }
        return doj1[1] - doj2[1];
    }
    return doj1[2] - doj2[2];
}

int main() {
    struct employee emp_list[MAX_EMPLOYEES];
    int num_employees;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Get details of all employees
    for (int i = 0; i < num_employees; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp_list[i].name);
        printf("Age: ");
        scanf("%d", &emp_list[i].age);
        printf("Position: ");
        scanf("%s", emp_list[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", emp_list[i].doj);
    }

    // Sort by name
    qsort(emp_list, num_employees, sizeof(struct employee), compare_by_name);
    printf("\nEmployee List sorted by name:\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Name: %s\n", emp_list[i].name);
        printf("Age: %d\n", emp_list[i].age);
        printf("Position: %s\n", emp_list[i].position);
        printf("Date of Joining: %s\n\n", emp_list[i].doj);
    }

    // Sort by date of joining
    qsort(emp_list, num_employees, sizeof(struct employee), compare_by_doj);
    printf("\nEmployee List sorted by date of joining:\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Name: %s\n", emp_list[i].name);
    }

    return 0;
}
