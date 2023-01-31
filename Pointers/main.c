#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age; /*Creating the pointer variable with the memory address of the age*/

    double gpa = 3.4l;
    double * pGpa = &gpa; /*Must be same type with the variable*/

    char grade = 'A';
    char * pGrade = &grade;

    /*printf("age's memory address: %p\n", &age);

    /*Dereferencing Pointers
    int age1 = 25;
    int * pAge = &age;*/

    printf("%d", *&*&age); /*Dereference means the getting the value pointer points to.
                            &age gives the memory address adding * dereference it and gives the actual value
                            stored in this memory address.
    */



    return 0;
}
