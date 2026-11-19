#include <iostream>

using namespace std;

int main() {
    float bag_weight, total_fare;
    float trip_fare = 0;
    float bag_fare = 0;
    int number_of_seats, age, number;
    string answer;

    cout << "Enter number of available seats: "; 
    cin >> number_of_seats;

    if (number_of_seats <= 0) {
        cout << "No available seats left" << endl;
    }
    else {
        cout << "Enter 1 for Harar, 2 for Bahir Dar, 3 for Gonder, "
                "4 for Dire Dawa, 5 for Jimma and 6 for Arba Minch: ";
        cin >> number;

        switch (number) {
            case 1: trip_fare = 300.0; break;
            case 2: trip_fare = 400.0; break;
            case 3: trip_fare = 500.0; break;
            case 4: trip_fare = 600.0; break;
            case 5: trip_fare = 700.0; break;
            case 6: trip_fare = 700.0; break;
            default:
                cout << "Invalid destination" << endl;
                return 0;
        }

        float original_fare = trip_fare;   
        float discount = 0;                

        cout << "Are you a student? (yes or no): ";
        cin >> answer;
        if (answer == "yes") {
            discount += 0.30 * original_fare;
        }

        cout << "Enter your age: ";
        cin >> age;
        if (age <= 12) {
            discount += 0.50 * original_fare;
        }
        else if (age >= 60) {
            discount += 0.25 * original_fare;
        }

        trip_fare = original_fare - discount;

        cout << "Enter bag weight in kg: ";
        cin >> bag_weight;
        if (bag_weight > 20) {
            bag_fare = (bag_weight - 20) * 10.0;   
        }

        total_fare = trip_fare + bag_fare;

        cout << "Bag fare: " << bag_fare << " birr" << endl;
        cout << "Trip fare: " << trip_fare << " birr" << endl;
        cout << "Total fare: " << total_fare << " birr" << endl;
    }

    return 0;
}