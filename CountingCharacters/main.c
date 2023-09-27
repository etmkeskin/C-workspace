#include <stdio.h>
#include <string.h>

int CalcNumCharacters(char* userString, char userChar){

   int count = 0;
   int len = strlen(userString);

   for(int i = 0; i < len; i++){
      if(userChar == userString[i]){
         count++;
      }
   }

   return count;
}

int main(void) {

   char ch;
   char str[50];
   scanf("%c%s", &ch, str);

   int count = CalcNumCharacters(str, ch);

   if(count == 0 || count > 1){
      printf("%d %c's\n", count, ch);
   }
   else{
      printf("%d %c\n", count, ch);
   }

   return 0;
}
