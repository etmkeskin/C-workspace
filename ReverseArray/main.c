#include <stdio.h>

int ReverseArray(int arraySize, int numberArray[], int reversedArray[]) {

   int j = 0;
   for(int i = arraySize - 1; i >= 0; i--){
      reversedArray[j] = numberArray[i];
      j++;
   }


   return arraySize;

}

int main(void) {

   int i;
   int arraySize = 3;
   int input[] = {2, 4, 6};
   int result[20];

   ReverseArray(arraySize, input, result);

   for (i = 0; i < arraySize; i++) {
      printf("%d ", result[i]);
   }
   printf("\n");

   return 0;

}
