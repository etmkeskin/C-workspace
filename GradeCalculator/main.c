#include <stdio.h>
#include <string.h>

int main() {
   const double HOMEWORK_MAX = 800.0;
   const double QUIZZES_MAX = 400.0;
   const double MIDTERM_MAX = 150.0;
   const double FINAL_MAX = 200.0;
   char status[4];
   double homework;
   double quiz;
   double midterm;
   double final;
   double average;

   scanf("%s%lf%lf%lf%lf", status, &homework, &quiz, &midterm, &final);

   if(strcmp(status, "UG") == 0 || strcmp(status, "G") == 0 || strcmp(status, "DL") == 0){
      double hwPoints = homework * 100 / HOMEWORK_MAX;
      double qzPoints = quiz * 100 / QUIZZES_MAX;
      double midPoints = midterm * 100 / MIDTERM_MAX;
      double finPoints = final * 100 / FINAL_MAX;
      if(hwPoints > 100){
         hwPoints = 100;
      }
      if(qzPoints > 100){
         qzPoints = 100;
      }
      if(midPoints > 100){
         midPoints = 100;
      }
      if(finPoints > 100){
         finPoints = 100;
      }

      if(strcmp(status, "UG") == 0){
         average = (hwPoints * 20 / 100) + (qzPoints * 20 / 100) + (midPoints * 30 / 100) + (finPoints * 30 / 100);
         printf("Homework: %.1f%%\nQuizzes: %.1f%%\nMidterm: %.1f%%\nFinal Exam: %.1f%%\n%s average: %.1f%%\n", hwPoints, qzPoints, midPoints, finPoints, status, average);
      }
      else if(strcmp(status, "G") == 0){
         average = (hwPoints * 15 / 100) + (qzPoints * 5 / 100) + (midPoints * 35 / 100) + (finPoints * 45 / 100);
         printf("Homework: %.1f%%\nQuizzes: %.1f%%\nMidterm: %.1f%%\nFinal Exam: %.1f%%\n%s average: %.1f%%\n", hwPoints, qzPoints, midPoints, finPoints, status, average);
      }
      else{
         average = (hwPoints * 5 / 100) + (qzPoints * 5 / 100) + (midPoints * 40 / 100) + (finPoints * 50 / 100);
         printf("Homework: %.1f%%\nQuizzes: %.1f%%\nMidterm: %.1f%%\nFinal Exam: %.1f%%\n%s average: %.1f%%\n", hwPoints, qzPoints, midPoints, finPoints, status, average);
      }

      if(average < 60.0){
         printf("Course grade: F\n");
      }
      else if(average >= 60.0 && average < 70.0){
         printf("Course grade: D\n");
      }
      else if(average >= 70.0 && average < 80.0){
         printf("Course grade: C\n");
      }
      else if(average >= 80.0 && average < 90.0){
         printf("Course grade: B\n");
      }
      else{
         printf("Course grade: A\n");
      }

   }
   else{
      printf("Error: student status must be UG, G or DL\n");
   }

   return 0;
}
