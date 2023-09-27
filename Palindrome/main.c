#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

   char originalInput[50];
   char processedInput[50];
   int isPal = 1;

   fgets(originalInput, sizeof(originalInput), stdin);

   int j = 0;
   for(int i = 0; originalInput[i] != '\0'; i++){
       if(originalInput[i] != ' ' && originalInput[i] != '\n'){
          processedInput[j] = tolower(originalInput[i]);
         j++;
      }
   }
   processedInput[j] = '\0';

   int len = strlen(processedInput);

   for(int i = 0; i < len / 2; i++){
      if(processedInput[i] != processedInput[len - 1 - i]){
         isPal = 0;
         break;
      }
   }

   if(isPal == 1){
      printf("palindrome: %s\n", originalInput);
   }
   else{
      printf("not a palindrome: %s\n", originalInput);
   }

   return 0;
}
