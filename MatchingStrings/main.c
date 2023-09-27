#include <stdio.h>
#include <string.h>

int main(void) {

   char str1[50];
   char str2[50];
   int count = 0;

   scanf("%s%s", str1, str2);


   if(strlen(str1) <= strlen(str2)){
      for(int i = 0; i < strlen(str1); i++){
         if(str1[i] == str2[i]){
            count++;
         }
      }
   }
   else{
      for(int i = 0; i < strlen(str2); i++){
         if(str1[i] == str2[i]){
            count++;
         }
      }
   }

   if(count == 1){
      printf("%d character matches\n", count);
   }
   else{
      printf("%d characters match\n", count);
   }

   return 0;
}
