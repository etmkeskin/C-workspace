#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TITLE_LENGTH 45

int main() {
   char filename[100];
   scanf("%s", filename);

   FILE* file = fopen(filename, "r");
   if (!file) {
      printf("Error opening file '%s'\n", filename);
      return 1;
   }

   char line[256];
   char previousTitle[MAX_TITLE_LENGTH] = "";
   char title[MAX_TITLE_LENGTH], rating[6], showtime[6];
   int isFirstShowtime = 1;

   while (fgets(line, sizeof(line), file)) {
      sscanf(line, "%[^,],%[^,],%s", showtime, title, rating);
      title[MAX_TITLE_LENGTH - 1] = '\0'; // Truncate title if it exceeds MAX_TITLE_LENGTH

      if (strcmp(title, previousTitle) != 0) {
         if (!isFirstShowtime) {
            printf("\n");
         }
         printf("%-44s | %5s | %s", title, rating, showtime);
         strcpy(previousTitle, title);
         isFirstShowtime = 0;
        }
        else{
         printf(" %s", showtime);
        }
   }

   printf("\n"); // New line at the end
   fclose(file);

   return 0;
}
