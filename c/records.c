#include<stdio.h>
#include<string.h>
struct student
{ 
    int id;
    char name[50];
    float grade;
};

int main()
{
    

    struct student student1;

    //assign values

    student1.id = 786;
    strcpy(student1.name, "Lakshya jain");
    student1.grade = 8.8;

    //print the values

    printf("Student ID : %d\n", student1.id);
    printf("Student Name : %s\n", student1.name);
    printf("Student Grade : %f\n", student1.grade);

    return 0;

}