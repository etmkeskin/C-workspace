#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Format*/
    char characterName[] = "John";
    int age = 35;
    printf("There is a man named %s,\n", characterName);
    printf("he was %d years old.\n", age);

    /*int age1 = 40;
    double gpa = 3.7;
    char grade = 'A';
    char phrase[] = "at kafasi"; /*Technically an array */


    /*Math */
    printf("My favourite %s is %d.\n","number", 7);
    printf("%f\n", 5 + 4.5);
    printf("%f\n", pow(2, 8)); /*Need to be %f format*/\
    printf("%f\n", ceil(45.43));
    printf("%f\n", floor(45.43));


    /*Constants (cannot be modified, usually all capital to remind us that it is constant)*/
    const int NUM = 5;

    /*Getting input from user (%c character, %lf double, %d integer, %s for getting string allocate memory for characters)*/
    int age3;
    printf("Enter your age: ");
    scanf("%d", &age3);
    printf("You re %d years old\n", age3);
    double gpa1;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa1);
    printf("Your grade is %f\n", gpa1);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
    /*fgets(name, 20, stdin); to scan line from user*/



    return 0;
}
