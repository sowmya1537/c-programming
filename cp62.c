//create a structure called student with the member name,age,total marks
#include <stdio.h>
struct student {
    int age;
    char name[20];
    float marks;
};
int main() {
    struct student s1 = {18, "manupriya", 89.5};
    printf("age: %d\n", s1.age);
    printf("name: %s\n", s1.name);
    printf("marks: %.2f\n", s1.marks);
    struct student s2 = {18, "sowmya", 90.5};
    printf("age: %d\n", s2.age);
    printf("name: %s\n", s2.name);
    printf("marks: %.2f\n", s2.marks);
    float avg = (s1.marks + s2.marks) / 2;
    printf("Average: %.2f\n", avg);
    return 0;
}
