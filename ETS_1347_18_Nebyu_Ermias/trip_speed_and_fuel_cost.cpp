/*
(a) Inputs and Outputs
Inputs:
- Distance of the trip (km).
- Travel time in hours.
- Travel time in minutes.
- Fuel consumption (liters per 100 km).
- Fuel price per liter (birr).
Outputs:
- Average speed (km/h).
- Fuel used (liters).
- Fuel cost (birr).
(b) Process (Numbered List)
1. Start the program.
2. Declare variables for distance, hours, minutes, fuel consumption and fuel price.
3. Declare variables for total time, average speed, fuel used and fuel cost.
4. Read the distance, travel time (hours and minutes), fuel consumption and fuel price.
5. Convert the travel time into hours by dividing the minutes by 60 and adding the hours.
6. Calculate the average speed by dividing the distance by the total travel time.
7. Calculate the fuel used by multiplying the distance by the fuel consumption and dividing the result by 100.
8. Calculate the fuel cost by multiplying the fuel used by the price per liter.
9. Display the average speed, fuel used and fuel cost, each with two decimal places.
10. End the program*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuel_use, price_per_litre;
    int hours, minutes;

    cout << "Enter distance in kilometers: ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;

    cout << "Enter fuel use in liters per 100 km: ";
    cin >> fuel_use;

    cout << "Enter price per liter (birr): ";
    cin >> price_per_litre;

    double total_hours = hours + minutes / 60.0;

    // conditional operator: avoids dividing by zero
    double average_speed = (total_hours > 0) ? distance / total_hours : 0.0;

    double fuel_used = (fuel_use * distance) / 100.0;
    double fuel_cost = fuel_used * price_per_litre;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << average_speed << " km/h" << endl;
    cout << "Fuel used: " << fuel_used << " liters" << endl;
    cout << "Fuel cost: " << fuel_cost << " birr" << endl;

    return 0;
}