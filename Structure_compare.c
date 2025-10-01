// You are given information about two students and their fixed name "Alice" and "Bob". Each student has a CGPA (floating-point number) and a Salary (floating-point number). Your task is to read the data of both students and then Compare their CGPA and Salary and print who has the higher CGPA and Salary. If both have the same CGPA and Salary then print that they are equal.
// Input: The input contains information for two students: The first and second line contains the CGPA and Salary of student 1. The third and fourth line contains the CGPA and Salary of student 2.
// Output: The program must print two lines. In the first line, print who has the higher CGPA, or if they are equal. In the second line, print who has the higher Salary, or if they are equal.

#include <stdio.h>
struct Student {
    char name[50];
    float cgpa;
    float salary;
};

int main() {
    struct Student s1, s2;

    printf("Enter info for Student 1:\n");
    printf("Enter CGPA for Alice: ");
    scanf("%f", &s1.cgpa);
    printf("Enter Salary for Alice: ");
    scanf("%f", &s1.salary);

    printf("\nEnter info for Student 2:\n");
    printf("Enter CGPA for Bob: ");
    scanf("%f", &s2.cgpa);
    printf("Enter Salary for Bob: ");
    scanf("%f", &s2.salary);

    printf("\n---- Comparison Result ----\n");

    if (s1.cgpa > s2.cgpa)
        printf("Alice has higher CGPA than Bob\n");
    else if (s1.cgpa < s2.cgpa)
        printf("Bob has higher CGPA than Alice\n");
    else
        printf("Both have equal CGPA.\n");

    if (s1.salary > s2.salary)
        printf("Alice has higher Salary than Bob\n");
    else if (s1.salary < s2.salary)
        printf("Bob has higher Salary than Alice\n");
    else
        printf("Both have equal Salary.\n");

    return 0;
}
