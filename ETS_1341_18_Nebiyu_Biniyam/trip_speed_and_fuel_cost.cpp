// ============================================================
// Fundamentals of Programming I - Individual Assignment 1
// Task 3: Trip speed and fuel cost
// (a) Inputs and outputs
//     Inputs : distance of the trip (km), travel time as
//              hours and minutes (whole numbers), fuel use
//              (liters per 100 km), price per liter (birr)
//     Outputs: average speed (km/h), fuel used (liters)
//              and fuel cost (birr), each with two decimal
// (b) Process
//     1. Read the distance in km.
//     2. Read the travel time: hours and minutes.
//     3. Read the fuel use (liters per 100 km).
//     4. Read the price per liter (birr).
//     5. totalHours = hours + minutes / 60.0
//     6. speed = distance / totalHours
//     7. fuel = distance * fuelUse / 100
//     8. cost = fuel * price
//     9. Print the speed, the fuel used and the fuel cost
//        with two decimals.
//
// (c) Complete C++ program (below)
// ============================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double distance, fuelUse, pricePerLiter;
    int hours, minutes;
    double totalHours, speed, fuel, cost;

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time - hours: ";
    cin >> hours;

    cout << "Enter travel time - minutes: ";
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelUse;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalHours = hours + static_cast<double>(minutes) / 60.0;
    speed = distance / totalHours;
    fuel = distance * fuelUse / 100.0;
    cost = fuel * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel << " liters" << endl;
    cout << "Fuel cost: " << cost << " birr" << endl;

    return 0;
}
