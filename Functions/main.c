#include <stdio.h>
#include <stdlib.h>


/*When using functions define the functions above main*/
double cube(double num){
    double result = num * num * num;


    return result;
}

void sayHi(char name[]){
    printf("Hello %s\n", name);
}


int main(){

    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);
    sayHi(name);
    printf("Answer: %f", cube(3.0));


    return 0;
}
