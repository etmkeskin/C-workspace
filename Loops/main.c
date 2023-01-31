#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1;
    while(index <= 5){
        printf("While: %d\n", index);
        index++;
    }

    /*Do while executes the loop one time even if the condition is false(try index = 6)
      But in while loop when index is 6 nothing will be printed on console.
    */
    int index1 = 6;
    do{
        printf("Do-while: %d\n", index1);
        index1++;
    }while(index1 <= 5);



    return 0;
}
