#include <stdio.h>

// Define structure for employee
struct Employee {
    char name[50];
    int age;
    float salary;
    char joining_date[20];
};

int main() {
    // Declare an array of structures to hold multiple employees
    struct Employee employees[5]; // Assuming there are 5 employees

    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        
        printf("Enter age of employee %d: ", i + 1);
        scanf("%d", &employees[i].age);
        
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        
        printf("Enter joining date of employee %d (dd-mm-yyyy): ", i + 1);
        scanf("%s", employees[i].joining_date);
    }

    // Display employee information
    printf("\nEmployee Information:\n");
    printf("------------------------------------------------------------------\n");
    printf("Name\t\tAge\t\tSalary\t\tJoining Date\n");
    printf("------------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%s\n", employees[i].name, employees[i].age, employees[i].salary, employees[i].joining_date);
    }

    return 0;
}
