#include <stdio.h>

int main(void) {
   int size;
   int sum = 0;

   scanf("%d", &size);
   int listA[size];   // List A
   int listB[size];   // List B

   for(int i = 0; i < size; i++){
      scanf("%d", &listA[i]);
   }
   for(int i = 0; i < size; i++){
      scanf("%d", &listB[i]);
   }
   for(int i = 0; i < size; i++){
      sum += (listA[i] * listB[i]);
   }

   printf("%d\n", sum);

   return 0;
}
