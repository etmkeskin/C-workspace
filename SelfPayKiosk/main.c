#include <stdio.h>
#include <string.h>
#include "SelfPayKiosk.h"

int main(void) {
   SelfPayKiosk kiosk;

   kiosk = InitializeSelfPayKiosk(kiosk);

   // Test basic operations
   kiosk = ScanItem(kiosk, 20.49);
   kiosk = CheckOut(kiosk);
   kiosk = MakePayment(kiosk, 25.20);
   printf("Number of customers: %d\n", GetNumCustomers(kiosk));
   printf("Amount due: %.2lf\n", GetAmountDue(kiosk));
   printf("Total Sales: %.2lf\n", GetTotalSales(kiosk));

   // Add statements as functions are completed to support development mode testing

   // Test simulateSales(kiosk)
   kiosk = ResetKiosk(kiosk);
   kiosk = SimulateSales(kiosk, 100, 5, 2.5);
   printf("Number of customers: %d\n", GetNumCustomers(kiosk));
   printf("Amount due: %.2lf\n", GetAmountDue(kiosk));
   printf("Amount due: %.2lf\n", GetTotalSales(kiosk));

   return 0;
}
