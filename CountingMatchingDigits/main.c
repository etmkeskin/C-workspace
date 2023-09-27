#include <stdio.h>

int main(void) {

   int start;

   scanf("%d", &start);

   if(start < 11 || start > 100){
      printf("Input must be 11-100\n");
   }
   else{
      printf("%d ", start);
      while(start != 11 && start != 22 && start != 33 && start != 44 && start != 55 && start != 66 && start != 77 && start != 88 && start != 99){
         start -= 1;
         printf("%d ", start);

      }
      printf("\n");
   }


   return 0;
}
