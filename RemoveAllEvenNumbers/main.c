#include <stdio.h>

int RemoveEvens(int arraySize, int numberArray[], int oddNumberArray[]) {

   int count = 0;

   for(int i = 0; i < arraySize; i++){
      if(numberArray[i] % 2 != 0){
         oddNumberArray[count] = numberArray[i];
         count++;
      }
   }

   return count;


}

int main(void) {

   int i;
   int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int result[20];
   int numberOfOdds;

   numberOfOdds = RemoveEvens(9, input, result);

   for (i = 0; i < numberOfOdds; i++) {
      printf("%d, ", result[i]);
   }
   printf("\n");


   return 0;

}
