/*
 #Input
   - Units of electricity used in the month (kWh, a whole number, int)

#Outputs
   -Energy charge (two decimals)
   -Service charge (two decimals)
   -Total bill (two decimals)

   #Process
   1, Define constants: tier limit = 50, first rate = 1.50, second rate = 2.00, service charge = 10.
   2, Read the units used.
   3, Work out the units in the first tier: the smaller of units and 50 (conditional operator).
   4, Work out the units in the second tier: units - 50 if units is above 50, otherwise 0 (conditional operator).
   5, Calculate energy charge = (first tier units × 1.50) + (second tier units × 2.00).
   6, Calculate total bill = energy charge + service charge.
   7, Display the energy charge, the service charge and the total bill with two decimal places.

*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    

}