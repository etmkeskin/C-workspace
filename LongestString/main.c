#include <stdio.h>
#include <string.h>

int main() {
   char str1[25];
   char str2[25];

   scanf("%s", str1);
   scanf("%s", str2);

   if(strlen(str2) >= strlen(str1)){
      printf("%s\n", str2);
   }
   else{
      printf("%s\n", str1);
   }

   return 0;
}
