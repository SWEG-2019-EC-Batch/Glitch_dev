/*
  #Inputs

-Distance of the trip (km)
-Travel time: hours (whole number, int)
-Travel time: minutes (whole number, int)
-Fuel use of the car (liters per 100 km)
-Price per liter of fuel (birr)


#Outputs
 
- Average speed (km/h)
- Fuel used (liters)
- Fuel cost (birr)


#Process

    1, Define the constants: MINUTES_PER_HOUR = 60.0 and FUEL_BASIS = 100.0.
    2, Declare the input variables: distance (double), hours (int), minutes (int), fuelPer100 (double), pricePerLiter (double).
    3, Declare the result variables: totalTime (double), avgSpeed (double), fuelUsed (double), fuelCost (double).
    4, Read the distance, hours, minutes, fuel use per 100 km and price per liter from the user.
    5, Convert the travel time to hours: totalTime = hours + (minutes / MINUTES_PER_HOUR).
    6, Calculate average speed: avgSpeed = distance / totalTime.
    7, Calculate fuel used: fuelUsed = (distance / FUEL_BASIS) * fuelPer100.
    8, Calculate fuel cost: fuelCost = fuelUsed * pricePerLiter.
    9, Display the average speed, fuel used and fuel cost, each with two decimal places.




    #Program Design (Algorithm)

1, Start
2, Declare the constants: MINUTES_PER_HOUR = 60.0, FUEL_BASIS = 100.0
3, Declare the double variables: distance, fuelPer100, pricePerLiter, totalTime, avgSpeed, fuelUsed, fuelCost
4, Declare the int variables: hours, minutes
5, Display “Enter distance in km: “
6, Read the distance into distance
7, Display “Enter traveled time !hour and minutes separated by space: “
8, Read the hours and minutes into hours and minutes
9, Display “Enter the use per 100 km: “
10, Read the fuel use into fuelPer100
11, Display “Enter the price per liter in birr: “
12, Read the price into pricePerLiter
13, Calculate the total time in hours: totalTime = hours + (minutes / MINUTES_PER_HOUR)
14, Calculate the average speed: avgSpeed = distance / totalTime
15, Calculate the fuel used: fuelUsed = (distance / FUEL_BASIS) * fuelPer100
16, Calculate the fuel cost: fuelCost = fuelUsed * pricePerLiter
17, Set the output format to fixed with two decimal places
18, Display “Average Speed: “ followed by avgSpeed
19, Display “Fuel Used: “ followed by fuelUsed
20, Display “Fuel Cost:” followed by fuelCost
21, End


*/



#include <iostream>
#include <iomanip>

using namespace std;

int main() {

 const double MINUTES_PER_HOUR = 60.0;
 const double FUEL_BASIS = 100.0;
 double distance, fuelPer100, pricePerLiter, totalTime, avgSpeed, fuelUsed, fuelCost;
 int hours, minutes;

 cout << "Enter distance in km: ";
 cin >> distance;
 cout << "Enter traveled time !hour and minutes separated by space: ";
 cin >> hours >> minutes;
 cout << "Enter the use per 100 km: ";
 cin >> fuelPer100;
 cout << "Enter the price per liter in birr: ";
 cin >> pricePerLiter;

 totalTime = hours + (minutes / MINUTES_PER_HOUR);
 avgSpeed = distance / totalTime;
 fuelUsed = (distance / FUEL_BASIS) * fuelPer100;
 fuelCost = fuelUsed * pricePerLiter;

 cout << fixed << setprecision(2) ;
 cout << "Average Speed: " << avgSpeed<< endl;
 cout << "Fuel Used: " << fuelUsed<< endl;
 cout << "Fuel Cost:" << fuelCost << endl;


}