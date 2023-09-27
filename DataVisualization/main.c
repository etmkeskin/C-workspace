#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char title[100];
   char header1[20];
   char header2[20];

   //Task1
   printf("Enter a title for the data:\n");
   fgets(title, sizeof(title), stdin);
   printf("You entered: %s", title);

   //Task2
   printf("\nEnter the column 1 header:\n");
   fgets(header1, sizeof(header1), stdin);
   printf("You entered: %s", header1);

   printf("\nEnter the column 2 header:\n");
   fgets(header2, sizeof(header2), stdin);
   printf("You entered: %s", header2);

   header1[strlen(header1) - 1] = '\0';
   header2[strlen(header2) - 1] = '\0';

   //Task3 & Task4
   char** dataString = NULL;
   int* dataInt = NULL;
   int count = 0;

   while(1){
      printf("\nEnter a data point (-1 to stop input):\n");

      dataString = realloc(dataString, (count + 1) * sizeof(char*));
      dataString[count] = malloc(100 * sizeof(char));

      dataInt = realloc(dataInt, (count + 1) * sizeof(int));

      char line[100];
      fgets(line, sizeof(line), stdin);

      if(strcmp(line, "-1") == 0){
         break;
      }
      else{

         char* commaPos = strchr(line, ',');
         if(commaPos == NULL){
            printf("Error: No comma in string.\n");
         }
         else{
            char* secondCommaPos = strchr(commaPos + 1, ',');
            if(secondCommaPos != NULL){
               printf("Error: Too many commas in input.\n");
            }
            else{
               int numRead = sscanf(line, "%[^,], %d", dataString[count], &dataInt[count]);
               if(numRead == 2){
                  printf("Data string: %s\n", dataString[count]);
                  printf("Data integer: %d\n", dataInt[count]);
                  count++;
               }
               else if(numRead == 1){
                  printf("Error: Comma not followed by an integer.\n");
               }

            }
         }
      }
   }
   printf("\n");

   //Task5
   printf(" %33s", title);
   printf("%-20s|%23s\n", header1, header2);
   printf("--------------------------------------------\n");
   for(int i = 0; i < count; i++){
      printf("%-20s|%23d\n", dataString[i], dataInt[i]);
   }

   //Task6
   for(int i = 0; i < count; i++){
      printf("\n%20s ", dataString[i]);
      for(int j = 0; j < dataInt[i]; j++){
         printf("*");
      }
   }
   printf("\n");


   for (int i = 0; i < count; i++) {
      free(dataString[i]);
   }
   free(dataString);
   free(dataInt);


   return 0;
}
