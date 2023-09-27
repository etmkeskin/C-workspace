#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

   int annualSalary;
   int taxInterest;
   int unEmpComp;
   int status;
   int tax;
   int AGI;
   int deduction;
   int taxableIncome;
   double taxAmount;
   int newTax;
   int taxDue;

   scanf("%d%d%d%d%d", &annualSalary, &taxInterest, &unEmpComp, &status, &tax);
   AGI = annualSalary + taxInterest + unEmpComp;

   if(AGI <= 120000){
      printf("AGI: $%d\n", AGI);
      if(status != 1 && status != 2){
         status = 1;
      }
      if(status == 1){
         deduction = 12000;
         taxableIncome = AGI - deduction;
         if(taxableIncome > 0){
            printf("Deduction: $%d\nTaxable income: $%d\n", deduction, taxableIncome);
         }
         else{
            taxableIncome = 0;
         }
         if(taxableIncome >= 0 && taxableIncome <= 10000){
            taxAmount = taxableIncome * 10 / 100;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         else if(taxableIncome > 10000 && taxableIncome <= 40000){
            taxAmount = (taxableIncome - 10000) * 12 /100 + 1000;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         else if(taxableIncome > 40000 && taxableIncome <= 85000){
            taxAmount = (taxableIncome - 40000) * 22 /100 + 4600;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         else{
            taxAmount = (taxableIncome - 85000) * 24 /100 + 14500;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }

         taxDue = newTax - tax;
         if(taxDue < 0){
            printf("Tax refund: $%d\n", (int)fabs(taxDue));
         }
         else{
            printf("Taxes Owed: $%d\n", taxDue);
         }
      }
      else{
         deduction = 24000;
         taxableIncome = AGI - deduction;
         if(taxableIncome > 0){
            printf("Deduction: $%d\nTaxable income: $%d\n", deduction, taxableIncome);
         }
         else{
            taxableIncome = 0;
            printf("Deduction: $%d\nTaxable income: $%d\n", deduction, taxableIncome);
         }

         if(taxableIncome >= 0 && taxableIncome <= 20000){
            taxAmount = taxableIncome * 10 / 100;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         else if(taxableIncome > 20000 && taxableIncome <= 80000){
            taxAmount = (taxableIncome - 20000) * 12 /100 + 2000;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         else{
            taxAmount = (taxableIncome - 80000) * 22 /100 + 9200;
            newTax = round(taxAmount);
            printf("Federal tax: $%d\n", newTax);
         }
         taxDue = newTax - tax;
         if(taxDue < 0){
            printf("Tax refund: $%d\n", (int)fabs(taxDue));
         }
         else{
            printf("Taxes Owed: $%d\n", taxDue);
         }
      }

   }
   else{
      printf("AGI: $%d\nError: Income too high to use this form\n", AGI);
   }


   return 0;
}
