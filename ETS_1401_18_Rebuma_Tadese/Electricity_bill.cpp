/*
✍️Inputs
    💭Electricity units consumed in a month (in kWh), and it is  a whole number.

✍️Outputs
    💭Energy charge.
    💭Service charge.
    💭Total electricity bill.
👉All amounts must have two decimal places.

✍️Process
    💭Start the program.
    💭Read the electricity units consumed in a month which is in whole numbers.
    💭Check whether the units are less than or equal to 50 using the conditional operator.
    💭If the units are 50 or less, multiply all units by 1.50 birr.
    💭Otherwise( if the units are more than 50):
       👉Calculate the cost of the first 50 units (50 × 1.50).
       👉Calculate the cost of the remaining units (units − 50) × 2.00.
       👉Add both amounts to get the energy charge.
    💭Add the fixed service charge of 10 birr to the energy charge.
    💭Display the energy charge, service charge, and total bill with two decimal places.
    💭End the program.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int units;

    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    double energyCharge, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units <= 50)
        ? units * FIRST_RATE
        : (50 * FIRST_RATE) + ((units - 50) * EXTRA_RATE);

    totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;

    return 0;
}

