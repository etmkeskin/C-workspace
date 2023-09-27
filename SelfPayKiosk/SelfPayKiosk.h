#include <stdio.h>
#ifndef SELF_PAY_KIOSK_H
#define SELF_PAY_KIOSK_H

typedef struct SelfPayKiosk_Struct {
   // TODO: Declare data members
   int customer;
   double totalSales;
   double currAmount;
   int isReadyPayment;

} SelfPayKiosk;

// Initialization
SelfPayKiosk InitializeSelfPayKiosk(SelfPayKiosk kiosk);

// Return total daily sales
double GetTotalSales(SelfPayKiosk kiosk);

// Return current amount due
double GetAmountDue(SelfPayKiosk kiosk);

// Return number of customers served
int GetNumCustomers(SelfPayKiosk kiosk);

// Scan one item
SelfPayKiosk ScanItem(SelfPayKiosk kiosk, double price);

// Apply sales tax to current purchases
SelfPayKiosk CheckOut(SelfPayKiosk kiosk);

// Cancel current purchases
SelfPayKiosk CancelTransaction(SelfPayKiosk kiosk);

// Reset register for the day
SelfPayKiosk ResetKiosk(SelfPayKiosk kiosk);

// Apply payment to amount due
SelfPayKiosk MakePayment(SelfPayKiosk kiosk, double payment);

// Simulate multiple transactions
SelfPayKiosk SimulateSales(SelfPayKiosk kiosk, int numSales, double initialPrice, double incrPrice);

#endif
