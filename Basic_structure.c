// Write a program that reads the name, roll, cgpa and salary of a student using a structure and prints the all information.
// Input: The input contains: A string name (without spaces). An integer roll. A floating-point number cgpa and an integer salary.
// Output: Print the student all information in the following format.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float cgpa;
    int salary;
};

int main() {
    struct Student s;

    printf("Enter a name: ");
    scanf("%s", &s.name);

    printf("Enter a roll: ");
    scanf("%d", &s.roll);

    printf("Enter a cgpa: ");
    scanf("%f", &s.cgpa);

    printf("Enter a salary: ");
    scanf("%d", &s.salary);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("CGPA: %.2f\n", s.cgpa);
    printf("Salary: %d\n", s.salary);

    return 0;
}
