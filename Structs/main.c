#include <stdio.h>
#include <stdlib.h>


/*java daki oop nin aynisi aslinda*/
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;

};


int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Computer Science");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Major: %s\n", student1.major);
    printf("GPA: %.1f\n", student1.gpa);


    return 0;
}
