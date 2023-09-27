#include <stdio.h>

void SortArray(int sortingList[], int numVals){

   for(int i = 0; i < numVals; i++){
      for(int j = 0; j < numVals; j++){
         if(sortingList[i] > sortingList[j]){
            int temp = sortingList[i];
            sortingList[i] = sortingList[j];
            sortingList[j] = temp;
         }
      }
   }



}

int main(void) {

   int numVals;
   scanf("%d", &numVals);
   int list[numVals];

   for(int i = 0; i < numVals; i++){
      scanf("%d", &list[i]);
   }

   SortArray(list, numVals);

   for(int i = 0; i < numVals; i++){
      printf("%d,", list[i]);
   }
   printf("\n");

   return 0;
}
