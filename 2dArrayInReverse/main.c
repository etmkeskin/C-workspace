#include <stdio.h>

int main(void) {

   int row = 4;
   int col = 3;
   int nums[row][col];
   int num;

   scanf("%d", &num);

   for(int i = 0; i < row; i++){
      for(int j = 0; j < col; j++){
         nums[i][j] = num;
         scanf("%d", &num);
      }
   }
   for(int i = row - 1; i >= 0; i--){
      for(int j = col - 1; j >= 0; j--){
         printf("%d ", nums[i][j]);
      }
      printf("\n");
   }



   return 0;
}
