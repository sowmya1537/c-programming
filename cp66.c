//Using typedef for a structure employee with members empid,  name, salary create an array of three emp input their details from the user  print the emp with highest salary
#include <stdio.h>
typedef struct {
    int emp_id;
    char name[20];
    float salary;
} emp;
void display(emp e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("EmployeeID: %d, Name: %s, Salary: %.2f\n", e[i].emp_id, e[i].name, e[i].salary);
    }
}
int main() {
    emp s[3];
    int n = 3;
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &s[i].emp_id);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Salary: ");
        scanf("%f", &s[i].salary);
    }
    printf("\nEmployee Details:\n");
    display(s, n);
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].salary > s[maxIndex].salary) {
            maxIndex = i;
        }
    }
    printf("\nEmployee with highest salary:\n");
    printf("EmployeeID: %d, Name: %s, Salary: %.2f\n",
           s[maxIndex].emp_id, s[maxIndex].name, s[maxIndex].salary);
    return 0;
}
