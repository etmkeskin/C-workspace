#include <stdio.h>
#include <string.h>

int main(void) {

   char input[50];

   fgets(input, sizeof(input), stdin);
   input[strcspn(input, "\n")] = '\0';
   int len = strlen(input);

   while(strcmp(input, "Done") != 0 && strcmp(input, "done") != 0 && strcmp(input, "d") != 0){

      for(int i = 0; i < len / 2; i++){
         char temp = input[i];
         input[i] = input[len - 1 - i];
         input[len - 1 - i] = temp;
      }
      printf("%s\n", input);
      fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';
      len = strlen(input);
   }




   return 0;
}
