/*
salary calculator.
design and develop a program that is used to calculate the salary of an employee. the program will prompt the user to input the base salary and the number of hours worked in a week. an employee is expected to work for 40hrs per week. if the worked hours exceed the expected working hour, the employee is entitled for bonus payment. the bonus rate should be input from the user. the program is expected to calculate gross salary, bonus payement, tax deduction and net salary. the program deducts 7% of the gross salary as pension. the tax is calculated as follows: from 0 - 3500 is free of tax; 3500 - 10000 is 10%; from 10000 - 25000 is 15%; from 25000 - 50000 is 20%; from 50000 - 100000 is 25%; >100000 is 30%
*both tax and pension are applied to the gross salary.
*/
/*
-ipo analysis
inputs
- base salary
- number of work hours per week
- bonus rate
outputs
- gross salary
- bonus payment
- pension
- net salalry
- tax
process
- gross salary= base salary + bonus payment
- bonus payment= (working hr - 40)*bonus rate
- pension= 0.07* gross salary
- tax= gross salary* tax rate for different salary amounts
- net salary= gross salary - pension - tax
*/
#include <iostream>
using namespace std;
int main()
{
    const float pension_rate = 0.07;
    const int base_work_hr_per_week = 40;
    float base_salary, work_hrs_per_week, bonus_rate, gross_salary, bonus_payement, pension, net_salary, tax, tax_rate, penalty, deduction_rate;
    char choice;

    cout << "enter your base salary: ";
    cin >> base_salary;

    cout << "enter number of work hours per week: ";
    cin >> work_hrs_per_week;


    bonus_payement = 0;
    if (work_hrs_per_week > base_work_hr_per_week)
    {
        cout << "enter bonus rate: ";
        cin >> bonus_rate;
        bonus_payement = (work_hrs_per_week - base_work_hr_per_week) * bonus_rate;
        gross_salary = base_salary + bonus_payement;
    }
    else if (work_hrs_per_week < base_work_hr_per_week) {
        cout << "enter deduction rate in birr: ";
        cin >> deduction_rate;
        penalty = (base_salary/40) * deduction_rate;
        gross_salary = base_salary - penalty;
    }

    
    pension = pension_rate * gross_salary;

    if (0 < gross_salary && gross_salary <= 3500)
    {
        tax_rate = 0;
    }
    else if (3500 < gross_salary && gross_salary <= 10000)
    {
        tax_rate = 0.1;
    }
    else if (10000 < gross_salary && gross_salary <= 25000)
    {
        tax_rate = 0.15;
    }
    else if (25000 < gross_salary && gross_salary <= 50000)
    {
        tax_rate = 0.2;
    }
    else if (50000 < gross_salary && gross_salary <= 100000)
    {
        tax_rate = 0.25;
    }
    else if (100000 < gross_salary)
    {
        tax_rate = 0.3;
    }

    tax = gross_salary * tax_rate;
    net_salary = gross_salary - tax - pension;

    cout << "what do you want to display. \n for pension press A \n for gross salary press B \n for tax payment press C\n for bonus payment press D\n for net salary press E\n to display all press F" << endl;
    cin >> choice;
    switch (choice)
    {
    case 'A':
        cout << "your pension is " << pension << endl;
        break;
    case 'B':
        cout << "your gross salary is " << gross_salary << endl;
        break;
    case 'C':
        cout << "your tax payment is " << tax << endl;
        break;
    case 'D':
        cout << "your bonus payment is " << bonus_payement << endl;
        break;
    case 'E':
        cout << "your net salary is " << net_salary << endl;
        break;
    case 'F':
        
        cout << "your tax payment is " << tax << endl;
        cout << "your pension is " << pension << endl;
        cout << "your gross salary is " << gross_salary << endl;
        cout << "your bonus payment is " << bonus_payement << endl;
        cout << "your net salary is " << net_salary << endl;
        break;
    default:
        cout << "you didnt enter the correct choice";
        break;
    return 0;
    }

    
}