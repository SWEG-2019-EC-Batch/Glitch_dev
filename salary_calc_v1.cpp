// this salary calculator program calculates the salary of an employee based on their hourly wage and the number of hours worked in a week. It also takes into account overtime pay for hours worked beyond 40 hours.
//  the excercise is to create a salary calculator program that calculates the salary of an employee based on their hourly wage and the number of hours worked in a week. The program should also take into account overtime pay for hours worked beyond 40 hours. The program should prompt the user to enter their hourly wage and the number of hours worked in a week, and then calculate and display their total salary, including any overtime pay.
//  the program will ask the user to input the base salary and the number of hours worked in a week. It will then calculate the total salary based on the following rules:
// an employee is expected to work 40 hours per week. If they work more than 40 hours, they will receive overtime pay for the extra hours worked. Overtime pay is calculated at a rate of 1.5 times the employee's hourly wage for each hour worked beyond 40 hours. The program will then display the total salary, including any overtime pay, to the user.
// if the worked hours exceed 40 hours, the program will calculate the overtime pay and add it to the base salary to get the total salary. If the worked hours are less than or equal to 40 hours, the program will simply calculate the total salary based on the base salary and the number of hours worked. The program will then display the total salary to the user.
//  the bonus rate should be inputted by the user and should be a percentage of the base salary. The program should calculate the bonus amount based on the base salary and the bonus rate, and then add it to the total salary to get the final salary. The program should then display the final salary to the user.
//  the program is expeccted to calculate gross salary ,bonus payment,tax deduction and net salary. The program should prompt the user to enter their base salary, bonus rate, and tax rate. It should then calculate the gross salary by adding the base salary and bonus payment. The tax deduction should be calculated based on the gross salary and tax rate. Finally, the program should calculate the net salary by subtracting the tax deduction from the gross salary. The program should display the gross salary, bonus payment, tax deduction, and net salary to the user.
//  the program also deduct 7% of the gross salary as pension
//  the tax is calculated from 0-3500 free, from 3500-10000 10% and from 10000 - 25000 15% and from 25000 - 50000 20% and from 50000 - 100000 25% and from 100000 AND ABOVE 30%
//  both the pension and tax deductions should be calculated based on the gross salary, and the final net salary should be displayed to the user after all deductions have been made. The program should also handle invalid input gracefully, prompting the user to enter valid values for base salary, bonus rate, and tax rate if necessary.
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    // inputs: base salary,hours worked per week,bonus rate,tax rate
    // outputs: net salary,gross salary,pension,tax,bonus paid
    // declared variables(float):base_salary,hours_worked,bonus_rate,tax_rate,net_salary,tax range,gross_salary,tax,extra_hour
    // declared constants: BASE_HOUR,PENSION_RATE,

    /*calculations:gross salary=base salary + bonus
                   if hours worked >BASE_HOUR extra hour = hours worked-40
                    bonus=bonus rate*extra
                    if extra hour >=0 bonus=0
                    tax rate=0 for case 1,10 for case 2 ,.....
                    tax=tax rate * gross salary
                    pension=gross salary*PESNION_RATE
                    net salary=gross salary-(tax+pension)+bonus
    */
    float base_salary, hours_worked, bonus_rate, tax_rate, net_salary, gross_salary, tax, extra_hour, bonus;
    int     choice;
    enum choice
    {
        case1 = 1,
        case2,
        case3,
        case4,
        case5,
        case6
    };
    const float BASE_HOUR = 40;
    const float PENSION_RATE = 0.07;

    cout << "please enter your base salary: " << endl;
    cin >> base_salary;
    cout << "please enter your hours worked per week: " << endl;
    cin >> hours_worked;
    cout << "please enter your bonus rate in ETB: " << endl;
    cin >> bonus_rate;
    if (hours_worked > BASE_HOUR)
    {
        extra_hour = hours_worked - 40;
    }
    else if (hours_worked == BASE_HOUR)
    {
        bonus = 0;
    }
    else if (hours_worked < BASE_HOUR)
    {
        gross_salary = base_salary - (0.1 * base_salary);
    }
    else
    {
        cout << "invalid input" << endl;
        return 0;
    }
    bonus = bonus_rate * extra_hour;
    gross_salary = base_salary + bonus;
    
    if(gross_salary <= 3500)
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
    tax = gross_salary * tax_rate;
    float pension = gross_salary * PENSION_RATE;
    net_salary = gross_salary - (tax + pension);
    //allow the user to choose what they want to see from the following options
    cout<<"dear employee,please choose what you want to see from the following options: "<<endl;
    cout<<"1. gross salary"<<endl;
    cout<<"2. bonus payment"<<endl;
    cout<<"3. tax deduction"<<endl;
    cout<<"4. pension deduction"<<endl;
    cout<<"5. net salary"<<endl;
    cout<<"6.all the above"<<endl;
    cout << "please enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "your gross salary is: " << gross_salary << endl;
        break;
    case 2:
        cout << "your bonus is: " << bonus << endl;
        break;
    case 3:
        cout << "your tax is: " << tax << endl;
        break;
    case 4:
        cout << "your pension is: " << pension << endl;
        break;
    case 5:
        cout << "your net salary is: " << net_salary << endl;
        break;
    case 6:
        cout << "your gross salary is: " << gross_salary << endl;
        cout << "your bonus is: " << bonus << endl;
        cout << "your tax is: " << tax << endl;
        cout << "your pension is: " << pension << endl;
        cout << "your net salary is: " << net_salary << endl;
        break;
    default:
        cout << "invalid choice" << endl;
    }
    cout << fixed << setprecision(2);
}
