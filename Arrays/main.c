#include <stdio.h>
#include <stdlib.h>

int main(){

    /* integer scan and math operation
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);*/


    /*Arrays*/
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    int size;
    printf("Please enter a number: ");
    scanf("%d", &size);
    int luckyNumbers1[size];
    int i;
    for(i = 0; i < size; i++){
        luckyNumbers1[i] = i + 1;
        printf("%d\n", luckyNumbers1[i]);
    }





    return 0;
}
