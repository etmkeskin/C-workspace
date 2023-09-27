#include <stdio.h>
#include <string.h>

int main() {
   char str1[20];
   char str2[20];
   char input[50];

   while (1) {
      printf("Enter input string:\n");
      fgets(input, sizeof(input), stdin);

      if (input[0] == 'q' || input[0] == 'Q') {
         break;
      }

      int check = sscanf(input, " %[^,], %s", str1, str2);

      if (check == 2) {
         char* token = strtok(str1, " \t\n");
         strcpy(str1, token);
         printf("First word: %s\n", str1);
         printf("Second word: %s\n", str2);
      }
      else{
         printf("Error: No comma in string.\n");
      }

      printf("\n");
   }

   return 0;
}
