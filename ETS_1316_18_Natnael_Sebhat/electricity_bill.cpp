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

   #Program Design

       1, Start
       2, Declare an int variable units
       3, Declare the constants: TIER_LIMIT = 50, FIRST_RATE = 1.50, SECOND_RATE = 2.00, SERVICE_CHARGE = 10.00
       4, Display “Enter electricity unit in KWH: “
       5, Read the units into units
       6,  Declare an int first_tier and use the conditional operator to set it: if units < TIER_LIMIT, first_tier = units; otherwise first_tier = TIER_LIMIT
       7, Declare an int second_tier and use the conditional operator to set it: if units > TIER_LIMIT, second_tier = units - TIER_LIMIT; otherwise second_tier = 0
       8, Declare a double energy_charge and calculate it: energy_charge = (first_tier × FIRST_RATE) + (second_tier × SECOND_RATE)
        9, Declare a double total_bill and calculate it: total_bill = energy_charge + SERVICE_CHARGE
        10, Set the output format to fixed with two decimal places
        11, Display “Energy Charge: “ followed by energy_charge
        12, Display “Service Charge: “ followed by SERVICE_CHARGE
        13, Display “Total Bill: “ followed by total_bill
        14, End

*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int units;
    const int TIER_LIMIT = 50;
    const double FIRST_RATE = 1.50;
    const double SECOND_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    cout << "Enter electricity unit in KWH: " << endl ;
    cin >> units;

    int first_tier  = units < TIER_LIMIT ? units : TIER_LIMIT;
    int second_tier = units > TIER_LIMIT ? units - TIER_LIMIT : 0;

    double energy_charge = (first_tier * FIRST_RATE) + (second_tier * SECOND_RATE);
    double total_bill = energy_charge + SERVICE_CHARGE ; 

    cout << fixed << setprecision(2) ;
    cout << "Energy Charge: " << energy_charge << endl;
    cout << "Service Charge: "<< SERVICE_CHARGE << endl;
    cout << "Total Bill:"<< total_bill << endl;

    return 0;

}