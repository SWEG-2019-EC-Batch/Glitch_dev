/*
✍️Inputs
        👉Distance of the trip (in kilometers).
        👉Travel hours (in whole number).
        👉Travel minutes (whole number).
        👉Fuel consumption (in liters per 100 km).
        👉Fuel price per liter (by birr).

✍️Outputs
        👉Average speed (km/h).
        👉Fuel used (liters).
        👉Fuel cost (birr).
💭All outputs must have two decimal places.

✍️Process
    👉Start the program.
    👉Define the constants like MINUTES_PER_HOUR = 60.0 and FUEL_BASIS = 100.0.
    👉Declare the input variables like  distance, hours , minutes, fuelPer100, and pricePerLiter.
    👉Declare the result variables like totalTime, average Speed , fuel Used , and  fuelCost.
    👉Read the distance, hours, minutes, fuel use per 100 km and price per liter from the user.
    👉Convert the travel time to hours: totalTime = hours + (minutes / MINUTES_PER_HOUR).
    👉Calculate average speed: avgSpeed = distance / totalTime.
    👉Calculate fuel used: fuelUsed = (distance / FUEL_BASIS) * fuelPer100.
    👉Calculate fuel cost: fuelCost = fuelUsed * pricePerLiter.
    👉Display the average speed, fuel used and fuel cost, each with two decimal places.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double distance, fuelConsumption, pricePerLiter;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    int hours, minutes;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelConsumption;

    cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;

    cout << "Fuel Used: " << fuelUsed << " liters" << endl;

    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}

