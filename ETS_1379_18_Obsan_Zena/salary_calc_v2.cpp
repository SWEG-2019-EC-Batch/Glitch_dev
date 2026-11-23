
#include <iostream>
using namespace std;

int main()
{
    const float pension_rate = 0.07;
    const int base_work_hr_per_week = 40;

    float base_salary = 0;
    float work_hrs_per_week, bonus_rate = 0;
    float gross_salary = 0, bonus_payment = 0;
    float pension = 0, net_salary = 0;
    float tax = 0, tax_rate = 0;
    float penalty = 0, hourly_rate = 0;

    char worker_type, choice, answer;


    cout << "Select worker category:\n";
    cout << "A. Ordinary employee\n";
    cout << "B. Labour worker\n";
    cin >> worker_type;

    cout << "Enter number of working hours per week: ";
    cin >> work_hrs_per_week;

    if (worker_type == 'A' || worker_type == 'a')
    {
        cout << "Enter base salary: ";
        cin >> base_salary;

       
        cout << "Is there a bonus? (Y/N): ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            if (work_hrs_per_week > base_work_hr_per_week)
            {
                cout << "Enter bonus rate per extra hour: ";
                cin >> bonus_rate;

                bonus_payment =
                (work_hrs_per_week - base_work_hr_per_week)
                * bonus_rate;
            }
            else
            {
                cout << "No overtime hours. No bonus awarded.\n";
            }
        }

        
        gross_salary = base_salary + bonus_payment;

        
        cout << "Is there a penalty fee? (Y/N): ";
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            cout << "Enter penalty amount: ";
            cin >> penalty;
        }

        
        pension = pension_rate * gross_salary;

        
        if (gross_salary <= 3500)
        {
            tax_rate = 0;
        }
        else if (gross_salary <= 10000)
        {
            tax_rate = 0.10;
        }
        else if (gross_salary <= 25000)
        {
            tax_rate = 0.15;
        }
        else if (gross_salary <= 50000)
        {
            tax_rate = 0.20;
        }
        else if (gross_salary <= 100000)
        {
            tax_rate = 0.25;
        }
        else
        {
            tax_rate = 0.30;
        }

        tax = gross_salary * tax_rate;
    }

    else if (worker_type == 'B' || worker_type == 'b')
    {
        cout << "Enter hourly wage rate: ";
        cin >> hourly_rate;

        
        gross_salary = work_hrs_per_week * hourly_rate;

        
        bonus_payment = 0;
        tax = 0;

        
        pension = pension_rate * gross_salary;

        
        penalty = 0;
    }

    else
    {
        cout << "Invalid worker category!";
        return 0;
    }

    
    net_salary = gross_salary - pension - tax - penalty;

  
    cout << "\nWhat do you want to display?\n";
    cout << "A. Pension\n";
    cout << "B. Gross salary\n";
    cout << "C. Tax payment\n";
    cout << "D. Bonus payment\n";
    cout << "E. Net salary\n";
    cout << "F. Penalty fee\n";
    cout << "G. Display all\n";

    cin >> choice;

    switch (choice)
    {
        case 'A':
        case 'a':
            cout << "Your pension is: " << pension;
            break;

        case 'B':
        case 'b':
            cout << "Your gross salary is: " << gross_salary;
            break;

        case 'C':
        case 'c':
            cout << "Your tax payment is: " << tax;
            break;

        case 'D':
        case 'd':
            cout << "Your bonus payment is: " << bonus_payment;
            break;

        case 'E':
        case 'e':
            cout << "Your net salary is: " << net_salary;
            break;

        case 'F':
        case 'f':
            cout << "Your penalty fee is: " << penalty;
            break;

        case 'G':
        case 'g':
            cout << "\n----- SALARY DETAILS -----\n";
            cout << "Gross salary: " << gross_salary << endl;
            cout << "Bonus payment: " << bonus_payment << endl;
            cout << "Pension: " << pension << endl;
            cout << "Tax: " << tax << endl;
            cout << "Penalty: " << penalty << endl;
            cout << "Net salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice!";
            break;
    }

    return 0;
}
