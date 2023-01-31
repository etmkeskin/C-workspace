#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 > num2 && num1 > num3){
        result = num1;
    }
    else if(num2 > num1 && num2 > num3){
        result = num2;
    }
    else{
        result = num3;
    }

    return result;
}

int main(){
    int num1, num2, num3;
    printf("Enter three numbers with blanks: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d is larger.", max(num1, num2, num3));


    return 0;
}
