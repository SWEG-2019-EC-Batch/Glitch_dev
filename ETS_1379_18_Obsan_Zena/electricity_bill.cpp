/*
A. Input and Output
Input:
1. Electricity units consumed (electricity_units).

Output:
1. Energy charge in birr (energy_charge).
2. Service charge in birr (service_charge).
3. Total electricity bill in birr (total_bill).

B. Process
1. Declare total_bill, energy_charge, and electricity_units as double variables.
2. Declare service_charge as a constant with an initial value of 10 birr.
3. Accept the electricity units consumed from the user.
4. Check whether the electricity consumption is less than or equal to 50 units.
5. If the consumption is less than or equal to 50 units, calculate the energy charge by multiplying the units consumed by 1.5 birr.
6. Otherwise, calculate the energy charge by adding:
   - The charge for the first 50 units at 1.5 birr per unit.
   - The charge for the remaining units at 2 birr per unit.
7. Calculate the total bill by adding the energy charge and the service charge.
8. Set the output precision to two decimal places.
9. Display the energy charge, service charge, and total electricity bill.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double total_bill, energy_charge, electricity_units;
    const double service_charge=10;
    cout<<"enter electicity_units: ";
    cin>>electricity_units;
    electricity_units<=50?energy_charge=electricity_units*1.5:energy_charge=(50*1.5)+(electricity_units-50)*2;
    total_bill=service_charge+energy_charge;
    cout<<fixed<<setprecision(2);
    cout<<"your energy charge is: "<<energy_charge<< " birr"<<endl;
    cout<<"your service charge is: "<<service_charge<< " birr"<<endl;
    cout<<"your total bill is: "<<total_bill<< " birr"<<endl;
    return 0;

}