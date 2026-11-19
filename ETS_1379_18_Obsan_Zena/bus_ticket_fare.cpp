#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float baggage_weight, total_fare, baggage_fare, available_seat, age;
    char student;
    int TRIP_FARE;
    int destination;
    cout<<"enter number of available seat: ";
    cin>>available_seat;
    if(available_seat<=0){
        cout<<"sorry all available seats have been sold out."<<endl;
    }
    else{
        cout<<"what is your destination. for hawassa enter 1, for bahir dar enter 2, for arbaminch enter 3, for harar enter 4, for diredawa enter 5: ";
        cin>>destination;
        switch(destination){
            case 1:
                TRIP_FARE=300;
        
            case 2:
            
                TRIP_FARE=400;
                break;
            case 3:
            
                TRIP_FARE=450;
                break;
            case 4:
            
                TRIP_FARE=550;
                break;
            case 5:
            
                TRIP_FARE=600;
                break;
        }
        cout<<"enter your age: ";
        cin>>age;
        cout<<"are you a student(y/n): ";
        cin>>student;
        if(age<=12 && student=='y'){
            TRIP_FARE=TRIP_FARE*0.2;
        }
        else if (age>=60 && student=='y')
        {
            TRIP_FARE=TRIP_FARE*0.45;
        }
        else if (age<60 && age>12 && student=='y')
        {
            TRIP_FARE=TRIP_FARE*0.7;
        }
        else if (age<=12 && student=='n' )
        {
            TRIP_FARE=TRIP_FARE*0.5;
        }
        else if (age>=60 && student=='n')
        {
            TRIP_FARE=TRIP_FARE*0.75;
        }
        else{
            TRIP_FARE=300;
        }
        cout<<"enter baggage weight in kg: ";
        cin>>baggage_weight;
        baggage_fare=0;
        total_fare=TRIP_FARE;
        if(baggage_weight>20)
        {
            baggage_fare=(baggage_weight-20)*10;
            total_fare=TRIP_FARE+baggage_fare;
        }
        cout<<"your baggage fare is: "<<baggage_fare<<endl;
        cout<<"your trip fare is: "<<TRIP_FARE<<endl;
        cout<<"your total fare is: "<<total_fare<<endl;
    }
    return 0;
}

