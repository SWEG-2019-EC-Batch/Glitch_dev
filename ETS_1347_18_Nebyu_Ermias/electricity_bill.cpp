/*
(a) Inputs and Outputs
Inputs:

- Electricity units consumed (kWh).

Outputs:
- Energy charge (birr).
- Service charge (birr).
- Total electricity bill (birr).
(b) Process (Numbered List)
1. Start the program.
2. Declare a variable to store the electricity units consumed.
3. Declare constants for the first 50 units' rate, additional units' rate and service charge.
4. Read the electricity units from the user.
5. Calculate the energy charge using the following conditions:
   - If units are 50 or less, multiply the units by 1.50 birr.
   - If units are above 50, charge 1.50 birr for the first 50 units and 2.00 birr for every additional unit.
6. Add the fixed service charge of 10 birr to the energy charge.
7. Display the energy charge, service charge and total bill to two decimal places.
8. End the program.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int electricity ;
    double  energy_charge, total_bill;
    const double service_charge = 10.00;
    cout << " enter electricity used in a month ";
    cin >> electricity;
electricity <= 50 ? energy_charge = electricity * 1.50 :  energy_charge = 50 * 1.50 + (electricity - 50) * 2.00;
    total_bill = energy_charge + service_charge;
    cout << fixed << setprecision(2);
    cout << "Energy charge: birr" << energy_charge << endl;
    cout << "Service charge: birr" << service_charge << endl;
    cout << "Total bill: birr" << total_bill << endl;
    return 0;
}