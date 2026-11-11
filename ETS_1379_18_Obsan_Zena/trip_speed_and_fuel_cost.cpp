/*. 
A.Input and Output
Input
The program accepts the following inputs from the user:
1. distance – Total distance travelled in kilometers.
2. hours – Travel time in hours.
3. minutes – Additional travel time in minutes.
4. car_fuel_use_per_hundred_km – Amount of fuel consumed by the car per 100 kilometers (litres).
5. fuel_price_per_litre – Price of one litre of fuel in birr.

Output
The program displays the following results:
1. Total fuel consumed in litres.
2. Average speed in kilometers per hour (km/hr).
3. Total fuel cost in Ethiopian birr

B.
Process
1. Declare all required variables as double data types.
2. Accept the distance travelled from the user.
3. Accept the travel time in hours and minutes.
4. Accept the car's fuel consumption per 100 kilometers.
5. Accept the price of fuel per litre.
6. Calculate the total fuel consumed by multiplying the car's fuel consumption rate by the distance travelled divided by 100.
7. Convert the travel time from hours and minutes into hours by dividing the minutes by 60 and adding the result to the hours.
8. Calculate the average speed by dividing the total distance travelled by the total travel time in hours.
9. Calculate the total fuel cost by multiplying the total fuel consumed by the price per litre.
10. Set the output precision to two decimal places.
11. Display the total fuel consumed, average speed, and total fuel cost.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double distance, hours, minutes, car_fuel_use_per_hundred_km, fuel_price_per_litre, average_speed, fuel_used, fuel_cost;
    cout<<"enter distance travelled: ";
    cin>>distance;
    cout<<"enter time of travel in hours and minutes separated by space: ";
    cin>>hours>>minutes;
    cout<<"enter car fuel use per hundred kilometers: ";
    cin>>car_fuel_use_per_hundred_km;
    cout<<"enter fuel price per litre: ";
    cin>>fuel_price_per_litre;
    fuel_used=car_fuel_use_per_hundred_km*(distance/100);
    average_speed=distance/(hours+(minutes/60));
    fuel_cost=fuel_price_per_litre*fuel_used;
    cout<<fixed<<setprecision(2);
    cout<<"total fuel used is: "<<fuel_used<<" litres"<<endl;
    cout<<"average speed is: "<<average_speed<<" km/hr"<<endl;
    cout<<"total fuel cost is: "<<fuel_cost<<" birr"<<endl;
    return 0;
}