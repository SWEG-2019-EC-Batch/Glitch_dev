
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float pension_rate = 0.07;
    const float expected_work_hours = 40.0;

    char worker_type, answer, choice;

    float worked_hours = 0;
    float hourly_rate = 0;
    float base_salary = 0;
    float bonus_rate = 0;
    float bonus_payment = 0;
    float gross_salary = 0;
    float penalty = 0;
    float pension = 0;
    float tax_rate = 0;
    float tax = 0;
    float net_salary = 0;

    cout << "========== SALARY CALCULATOR V2 ==========\n";
    cout << "Select worker category:\n";
    cout << "A. Ordinary employee\n";
    cout << "B. Laborer\n";
    cout << "Enter your choice: ";
    cin >> worker_type;

    if (worker_type == 'A' || worker_type == 'a')
    {
        // ORDINARY EMPLOYEE
        cout << "\nEnter base salary: ";
        cin >> base_salary;

        cout << "Enter hours worked this week: ";
        cin >> worked_hours;

        // Check for bonus
        cout << "Is the employee eligible for a bonus? (Y/N): ";
        cin >> answer;

        if ((answer == 'Y' || answer == 'y') &&
            worked_hours > expected_work_hours)
        {
            cout << "Enter bonus rate per overtime hour: ";
            cin >> bonus_rate;

            bonus_payment =
                (worked_hours - expected_work_hours) * bonus_rate;
        }

        gross_salary = base_salary + bonus_payment;

        // Check for penalty
        cout << "Is there a penalty fee? (Y/N): ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            cout << "Enter penalty amount: ";
            cin >> penalty;
        }

        // Calculate pension
        pension = gross_salary * pension_rate;

        // Calculate tax rate
        if (gross_salary <= 3500)
            tax_rate = 0.00;
        else if (gross_salary <= 10000)
            tax_rate = 0.10;
        else if (gross_salary <= 25000)
            tax_rate = 0.15;
        else if (gross_salary <= 50000)
            tax_rate = 0.20;
        else if (gross_salary <= 100000)
            tax_rate = 0.25;
        else
            tax_rate = 0.30;

        tax = gross_salary * tax_rate;
    }

    else if (worker_type == 'B' || worker_type == 'b')
    {
        // LABORER
        cout << "\nEnter hours worked: ";
        cin >> worked_hours;

        cout << "Enter hourly rate: ";
        cin >> hourly_rate;

        // Calculate basic earnings
        gross_salary = worked_hours * hourly_rate;

        // Check for bonus
        cout << "Does the laborer have a bonus? (Y/N): ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            cout << "Enter bonus amount: ";
            cin >> bonus_payment;
        }

        gross_salary += bonus_payment;

        // Check for machinery damage
        cout << "Did the laborer damage any machinery? (Y/N): ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            cout << "Enter machinery-damage penalty amount: ";
            cin >> penalty;
        }

        // No tax or pension deductions for laborers
        tax = 0;
        pension = 0;
    }

    else
    {
        cout << "\nInvalid worker category.\n";
        return 1;
    }

    // Calculate net salary
    net_salary = gross_salary - pension - tax - penalty;

    cout << fixed << setprecision(2);

    // Display options
    cout << "\nWhat would you like to display?\n";
    cout << "A. Gross salary\n";
    cout << "B. Bonus payment\n";
    cout << "C. Penalty\n";
    cout << "D. Pension\n";
    cout << "E. Tax\n";
    cout << "F. Net salary\n";
    cout << "G. Display all\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 'A':
        case 'a':
            cout << "Gross salary: " << gross_salary << '\n';
            break;

        case 'B':
        case 'b':
            cout << "Bonus payment: " << bonus_payment << '\n';
            break;

        case 'C':
        case 'c':
            cout << "Penalty: " << penalty << '\n';
            break;

        case 'D':
        case 'd':
            cout << "Pension: " << pension << '\n';
            break;

        case 'E':
        case 'e':
            cout << "Tax: " << tax << '\n';
            break;

        case 'F':
        case 'f':
            cout << "Net salary: " << net_salary << '\n';
            break;

        case 'G':
        case 'g':
            cout << "\n========== SALARY DETAILS ==========\n";

            cout << "Worker category: "
                 << ((worker_type == 'A' || worker_type == 'a')
                     ? "Ordinary employee" : "Laborer") << '\n';

            cout << "Hours worked: " << worked_hours << '\n';
            cout << "Gross salary: " << gross_salary << '\n';
            cout << "Bonus payment: " << bonus_payment << '\n';
            cout << "Penalty: " << penalty << '\n';
            cout << "Pension: " << pension << '\n';
            cout << "Tax: " << tax << '\n';
            cout << "Net salary: " << net_salary << '\n';
            break;

        default:
            cout << "Invalid display choice.\n";
            break;
    }

    return 0;
}
