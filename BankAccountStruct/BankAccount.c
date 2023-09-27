/* TODO: Type your header file guards and include directives here. */
#include <stdio.h>
#include <string.h>
#include "BankAccount.h"


BankAccount InitBankAccount(char* newName, double amt1, double amt2){
   BankAccount account;
   strcpy(account.name, newName);
   account.checkingBal = amt1;
   account.savingBal = amt2;

   return account;
}

BankAccount SetName(char* newName, BankAccount account){
   strcpy(account.name, newName);

   return account;
}

void GetName(char* customerName, BankAccount account){
   strcpy(customerName, account.name);
}

BankAccount SetChecking(double amt, BankAccount account){

   account.checkingBal = amt;
   return account;
}

double GetChecking(BankAccount account){
   return account.checkingBal;
}

BankAccount SetSavings(double amt, BankAccount account){

   account.savingBal = amt;
   return account;
}

double GetSavings(BankAccount account){
   return account.savingBal;
}

BankAccount DepositChecking(double amt, BankAccount account){
   if(amt > 0){
      account.checkingBal += amt;
   }
   return account;
}

BankAccount DepositSavings(double amt, BankAccount account){
   if(amt > 0){
      account.savingBal += amt;
   }
   return account;
}

BankAccount WithdrawChecking(double amt, BankAccount account){
   if(amt > 0){
      account.checkingBal -= amt;
   }
   return account;
}

BankAccount WithdrawSavings(double amt, BankAccount account){
   if(amt > 0){
      account.savingBal -= amt;
   }
   return account;
}

BankAccount TransferToSavings(double amt, BankAccount account){
   account.checkingBal -= amt;
   account.savingBal += amt;
   return account;
}










