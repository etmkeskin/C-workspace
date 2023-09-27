#include "SelfPayKiosk.h"

const double SALES_TAX = 0.07;

// Initializer
SelfPayKiosk InitializeSelfPayKiosk(SelfPayKiosk kiosk) {
   /* Complete the function */
   kiosk.customer = 0;
   kiosk.totalSales = 0.0;
   kiosk.currAmount = 0.0;
   int isReadyPayment = 0;

   return kiosk;
}

// Return total daily sales
double GetTotalSales(SelfPayKiosk kiosk) {
   /* Update the return statment */
   return kiosk.totalSales;
}

// Return current amount due
double GetAmountDue(SelfPayKiosk kiosk) {
   /* Update the return statment */
   return kiosk.currAmount;
}

// Return number of customers served
int GetNumCustomers(SelfPayKiosk kiosk) {
   /* Update the return statment */
      return kiosk.customer;
}

// Scan one item
SelfPayKiosk ScanItem(SelfPayKiosk kiosk, double price) {
   /* Complete the function */
   if(price > 0){
      kiosk.currAmount += price;
   }
   return kiosk;
}


// Apply sales tax to current purchases
SelfPayKiosk CheckOut(SelfPayKiosk kiosk) {
   /* Complete the function */
   double tax = kiosk.currAmount * SALES_TAX;
   kiosk.currAmount += tax;
   kiosk.isReadyPayment = 1;

   return kiosk;
}

// Cancel current purchases
SelfPayKiosk CancelTransaction(SelfPayKiosk kiosk) {
   /* Complete the function */
   if(kiosk.isReadyPayment == 0){
      kiosk.currAmount = 0.0;
   }

   return kiosk;
}

// Reset register for the day
SelfPayKiosk ResetKiosk(SelfPayKiosk kiosk) {
   /* Complete the function */
   kiosk.customer = 0;
   kiosk.totalSales = 0.0;
   kiosk.currAmount = 0.0;

   return kiosk;
}

// Apply payment to amount due
SelfPayKiosk MakePayment(SelfPayKiosk kiosk, double payment) {
   /* Complete the function */
   if(payment < 0 || kiosk.isReadyPayment == 0){
      return kiosk;
   }
   if(payment >= kiosk.currAmount){
      kiosk.totalSales += kiosk.currAmount;
      kiosk.customer++;
      kiosk.currAmount = 0.0;
      kiosk.isReadyPayment = 0;
   }
   else{
      kiosk.totalSales += payment;
      kiosk.currAmount -= payment;
   }

   return kiosk;
}

// Simulate multiple transactions
SelfPayKiosk SimulateSales(SelfPayKiosk kiosk, int numSales, double initialPrice, double incrPrice) {
   /* Complete the function */
   for(int i = 0; i < numSales; i++){
      kiosk = ScanItem(kiosk, initialPrice);
      kiosk = CheckOut(kiosk);
      kiosk = MakePayment(kiosk, kiosk.currAmount + 1);
      initialPrice += incrPrice;
   }

   return kiosk;
}
