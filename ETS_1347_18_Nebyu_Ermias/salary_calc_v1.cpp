#include <iostream>
using namespace std;

int main() {
    float base_salary, hour_worked, bonus_rate = 0;
    float bonus_payment = 0, gross_salary, tax_payment = 0 , deduction = 0;
    float pension, net_salary;
    int choice;

    cout << "Enter the base salary: "; 
    cin >> base_salary;

    cout << "Enter the number of hours worked: ";
    cin >> hour_worked;

    if (hour_worked > 40) {
        cout << "Enter the bonus rate (birr per overtime hour): ";
        cin >> bonus_rate;
        bonus_payment = (hour_worked - 40) * bonus_rate;
    gross_salary = base_salary + bonus_payment; }
    else if (hour_worked < 40) {
        deduction = (40 - hour_worked) * (base_salary / 40); 
        gross_salary = base_salary - deduction;
    }
    else {
        gross_salary = base_salary;
    }


    pension = 0.07 * gross_salary;

    // tax on gross salary
    if (gross_salary <= 3500) {
        tax_payment = 0;
    }
    else if (gross_salary <= 10000) {
        tax_payment = 0.10 * gross_salary;
    }
    else if (gross_salary <= 25000) {
        tax_payment = 0.15 * gross_salary;
    }
    else if (gross_salary <= 50000) {
        tax_payment = 0.20 * gross_salary;
    }
    else if (gross_salary <= 100000) {
        tax_payment = 0.25 * gross_salary;
    }
    else {
        tax_payment = 0.30 * gross_salary;
    }

    net_salary = gross_salary - tax_payment - pension;
cout << "Choose an option to display:" << endl;
    cout << "1. Gross salary" << endl;
    cout << "2. Tax payment" << endl;
    cout << "3. Net salary" << endl;
    cout << "4. Pension (7%)" << endl;
    cout << "5. Bonus payment" << endl;
    cout << "6. All details" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Gross salary is: " << gross_salary << " birr" << endl;
            break;
        case 2:
            cout << "Tax payment is: " << tax_payment << " birr" << endl;
            break;
        case 3:
            cout << "Net salary is: " << net_salary << " birr after taxation" << endl;
            break;
        case 4:
            cout << "Pension (7%) is: " << pension << " birr" << endl;
            break;
        case 5:
            cout << "Bonus payment is: " << bonus_payment << " birr" << endl;
            break;
        case 6:
            cout << "All details:" << endl;
            cout << "Gross salary: " << gross_salary << " birr" << endl;
            cout << "Tax payment: " << tax_payment << " birr" << endl;
            cout << "Pension (7%): " << pension << " birr" << endl;
            cout << "Net salary: " << net_salary << " birr after taxation" << endl;
            cout << "Bonus payment: " << bonus_payment << " birr" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }



    return 0;
}