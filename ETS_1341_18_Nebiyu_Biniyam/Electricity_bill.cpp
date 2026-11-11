// ============================================================
// Fundamentals of Programming I - Individual Assignment 1
// Task 2: Electricity bill 
// (a) Inputs and outputs
//     Input  : electricity units used in a month (kWh,
//              a whole number)
//     Outputs: energy charge, service charge and total bill
//              (each with two decimals)
// (b) Process
//     1. Read the units used.
//     2. energy = (units <= 50)
//                  ? units * 1.50
//                  : 50 * 1.50 + (units - 50) * 2.00
//        (first 50 units at 1.50 birr each, every unit
//         above 50 at 2.00 birr each)
//     3. service = 10.00 (fixed service charge)
//     4. total = energy + service
//     5. Print the energy charge, the service charge and
//        the total bill with two decimals.
//
// (c) Complete C++ program (below)
// ============================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double FIRST_RATE = 1.50;    // birr per unit, first 50 units
    const double EXTRA_RATE = 2.00;    // birr per unit above 50
    const double SERVICE_CHARGE = 10.00;
    const int FREE_LIMIT = 50;

    int units;
    double energy, total;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    energy = (units <= FREE_LIMIT)
                 ? units * FIRST_RATE
                 : FREE_LIMIT * FIRST_RATE + (units - FREE_LIMIT) * EXTRA_RATE;

    total = energy + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}
