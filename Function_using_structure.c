// You have to define a structure named Student to store the following information about a student: Name (string, up to 50 characters),ID and Marks. Then, create a function display() that receives the structure as a parameter and prints the information. 
// Input: The input consists of: A string (the student’s name), An integer (the student’s ID) and A float number (the student’s marks).
// Output: Print the student’s information in the required format. Marks should be shown with two decimal places.

#include <stdio.h>
struct Student
{
    char Name[50];
    int ID;
    float Marks;
};

void display (struct Student s)
{
    printf("Name: %s\n", s.Name);
    printf("ID: %d\n", s.ID);
    printf("Marks: %.2f\n", s.Marks);
}

int main()
{
    struct Student S = {"Nahid", 428, 87.5};
    display(S);

    return 0;
}
