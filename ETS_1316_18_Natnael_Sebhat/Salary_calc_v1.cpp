/*
    #Design and develop a program that used to calculate salary of an employee.
    - the program will ask the user to input the base salary and the number of hours worked in a week.
    - an employee is expected to work for 40 hours per week
    - if the  worked hour exeed  the expected working hour the employee is entitled for bonus payment.
    - the bonus rate should be input from the user
    - the porgram is expected to calculate gross salary, bonus payment, tax deduction and net salary.
    - the program also deduct 7% of the gross salary as pension.
    - the tax is calcualted as follows
    (
        - from 0-3500 is free of tax
        - from 3500- 10,000 tax of 10%
        - from 10,000 - 25,000 tax of 15%
        - from 25,000 - 50,000 tax of 20%
        - from 50,000 - 100,000 tax of 25%
        - greater than 100,000 tax of 30%
    )
        #Both tax is applied to the gross salary





        # IPO analysis

        #Input
        1, base salary
        2, number of hour worked in a week
        3, bonus rate per hour


        #Output
        1, gross salary
        2, bonus payment
        3, tax deduction
        4, net salary
        5, pension


        #process



*/
#include <iostream>
using namespace std;

int main()
{

    /*
    #Input
        1, base salary
        2, number of hour worked in a week
        3, bonus rate per hour
    */

    double base_salary, worked_hr, bonus_rate;
    /*
    #Output
            1, gross salary
            2, bonus payment
            3, tax deduction
            4, net salary
            5, pension
    */

    double gross_salary = 0.0;
    double bonus_payment = 0.0;
    double tax_deduction = 0.0;
    double net_salary = 0.0;
    double tax_rate = 0.0;
    double pension = 0.0;
    double penalty = 0.0;
    double const pension_rate = 0.07;
    int expected_hr = 40;
    int choose;

    cout << "Enter your base salary: " << endl;
    cin >> base_salary;
    cout << "Enter the number of hours worked in a week: " << endl;
    cin >> worked_hr;
    cout << "Enter the bonus rate: " << endl;
    cin >> bonus_rate;

    cout << "Choose which you want to see:" << endl
         <<

        "1 for all" << endl
         << "2 for gross payment" << endl
         << "3 for pension" << endl
         << "4 for bonus payment" << endl
         << "5 for tax deduction" << endl
         << "6 for penalty" << endl
         << "7 for net salary" << endl;

    cin >> choose;

    if (worked_hr > expected_hr)
    {
        bonus_payment = (worked_hr - expected_hr) * bonus_rate;
    }
    else if (worked_hr < expected_hr)
    {
        penalty = (expected_hr - worked_hr) * base_salary / expected_hr;
    }
    else
    {
        bonus_rate = 0;
        penalty = 0;
    }
    /*

    (
            - from 0-3500 is free of tax
            - from 3500- 10,000 tax of 10%
            - from 10,000 - 25,000 tax of 15%
            - from 25,000 - 50,000 tax of 20%
            - from 50,000 - 100,000 tax of 25%
            - greater than 100,000 tax of 30%
        )
    */

    gross_salary = (bonus_payment + base_salary) - penalty;

    if (gross_salary >= 0 && gross_salary <= 3500)
    {
        tax_rate = 0;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000)
    {
        tax_rate = 0.1;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000)
    {
        tax_rate = 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000)
    {
        tax_rate = 0.2;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000)
    {
        tax_rate = 0.25;
    }
    else if (gross_salary > 100000)
    {
        tax_rate = 0.3;
    }
    /*
    #Output
            1, gross salary
            2, bonus payment
            3, tax deduction
            4, net salary
            5, pension
    */

    tax_deduction = gross_salary * tax_rate;
    pension = gross_salary * pension_rate;
    net_salary = gross_salary - pension - tax_deduction;

    /*
    "1 for all" <<endl<<
        "2 for gross payment" <<endl<<
        "3 for pension" <<endl<<
        "4 for bonus payment" <<endl<<
        "5 for tax deduction" <<endl<<
        "6 for penalty" <<endl<<
        "7 for net salary" <<endl ;
    */

    switch (choose)
    {

    case 1:
        cout << "Penalty: " << penalty << endl;
        cout << "Gross salary: " << gross_salary << endl;
        cout << "Bonus Payment: " << bonus_payment << endl;
        cout << "Tax Deduction: " << tax_deduction << endl;
        cout << "Pension: " << pension << endl;
        cout << "Net salary: " << net_salary << endl;

        break;
        /*
          "1 for all" << endl
         << "2 for gross payment" << endl
         << "3 for pension" << endl
         << "4 for bonus payment" << endl
         << "5 for tax deduction" << endl
         << "6 for penalty" << endl
         << "7 for net salary" << endl;
        */

    case 2:
        cout << "Gross Salary: " << gross_salary << std::endl;
        break;

    case 3:
        cout << "Pension: " << pension << std::endl;
        break;

    case 4:
        cout << "Bonus Payment: " << bonus_payment << std::endl;
        break;

    case 5:
        cout << "Tax Deduction: " << tax_deduction << endl;
        break;

    case 6:
        cout << "Penalty: " << penalty << endl;
        break;

    case 7:
        cout << "Net Salary: " << net_salary << endl;
        break;

    default:
        cout << "Penalty: " << penalty << endl;
        cout << "Gross salary: " << gross_salary << endl;
        cout << "Bonus Payment: " << bonus_payment << endl;
        cout << "Tax Deduction: " << tax_deduction << endl;
        cout << "Pension: " << pension << endl;
        cout << "Net salary: " << net_salary << endl;
        break;
    }

    return 0;
}
