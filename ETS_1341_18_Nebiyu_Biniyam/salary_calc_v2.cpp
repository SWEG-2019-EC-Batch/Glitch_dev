// Salary calculator v2 - employees AND laborers, with overtime and machinery-damage penalty.
// Updated from salary_calc_v1.cpp. What changed, and the decisions behind
// EMPLOYEE: base salary (monthly) + bonus (% of base salary) + overtime
//           pay (hours over 40 at 1.5x the hourly wage), minus tax (by
//           gross-salary bracket, same rule as v1) and 7% pension.
// LABORER:  hours worked x hourly rate + bonus (ETB amount), minus a
//           machinery-damage penalty if any. No tax, no pension.
// I apologize for using AI to understand about the limits and string libraries I used 
// also I copy pasted only the  while function from muse.ai 
//and I don't know how to write the while myself myself. I will learn it in the future.
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;
const float BASE_HOUR = 40;         // full-time hours per week
const float PENSION_RATE = 0.07;    // pension: 7% of gross salary
const float OVERTIME_RATE = 1.5;    // overtime pays 1.5x the hourly wage
const float HOURS_PER_MONTH = 160;  // 40 hours/week x 4 weeks 
float readNumber(const string& prompt, float minValue) {
    float value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < minValue) {
            cout << "Invalid input. Please enter a number of 0 or more." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}
int readIntInRange(const string& prompt, int first, int last) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < first || value > last) {
            cout << "Invalid input. Please enter a number from "
                 << first << " to " << last << "." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}
bool readYesNo(const string& prompt) {
    char answer;
    while (true) {
        cout << prompt;
        cin >> answer;
        if (answer == 'y' || answer == 'Y') return true;
        if (answer == 'n' || answer == 'N') return false;
        cout << "Invalid input. Please enter y or n." << endl;
    }
}

int main() {
    cout << fixed << setprecision(2);  // money prints with 2 decimals (v1 set this AFTER printing)

    float base_salary = 0, hours_worked = 0, bonus_rate = 0, bonus = 0;
    float hourly_wage = 0, extra_hour = 0, overtime_pay = 0;
    float gross_salary = 0, tax_rate = 0, tax = 0, pension = 0, net_salary = 0;
    float penalty = 0;
    bool isLaborer = false;
    int type = readIntInRange("Enter 1 for Employee, 2 for Laborer: ", 1, 2);
    isLaborer = (type == 2);

    if (!isLaborer) {
        // ---------- EMPLOYEE ----------
        base_salary = readNumber("Please enter your base salary: ", 0);
        hours_worked = readNumber("Please enter your hours worked per week: ", 0);
        bonus_rate = readNumber("Please enter your bonus rate (percent of base salary, 0 if none): ", 0);

        hourly_wage = base_salary / HOURS_PER_MONTH;
        if (hours_worked > BASE_HOUR) {
            extra_hour = hours_worked - BASE_HOUR;
            overtime_pay = extra_hour * hourly_wage * OVERTIME_RATE;
        }
        bonus = base_salary * bonus_rate / 100;
        gross_salary = base_salary + bonus + overtime_pay;

        // Tax bracket, same rule as v1: one flat rate on the whole gross,
        // chosen by which bracket the gross falls in.
        if (gross_salary <= 3500) tax_rate = 0;
        else if (gross_salary <= 10000) tax_rate = 0.10;
        else if (gross_salary <= 25000) tax_rate = 0.15;
        else if (gross_salary <= 50000) tax_rate = 0.20;
        else if (gross_salary <= 100000) tax_rate = 0.25;
        else tax_rate = 0.30;

        tax = gross_salary * tax_rate;
        pension = gross_salary * PENSION_RATE;
        net_salary = gross_salary - tax - pension;
    } else {
        // ---------- LABORER ----------
        hours_worked = readNumber("Please enter your hours worked: ", 0);
        float hourly_rate = readNumber("Please enter your hourly rate in ETB: ", 0);
        bonus = readNumber("Please enter your bonus in ETB (0 if none): ", 0);
        if (readYesNo("Did the laborer damage any machinery? (y/n): ")) {
            penalty = readNumber("Please enter the penalty amount in ETB: ", 0);
        }
        gross_salary = hours_worked * hourly_rate + bonus;
        tax = 0;      // laborers: no tax deduction
        pension = 0;  // laborers: no pension deduction
        net_salary = gross_salary - penalty;
    }

    // --- let the user choose what to see ---
    cout << "Please choose what you want to see from the following options:" << endl;
    cout << "1. Gross salary" << endl;
    cout << "2. Bonus payment" << endl;
    cout << "3. Tax deduction" << endl;
    cout << "4. Pension deduction" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. All of the above" << endl;
    int choice = readIntInRange("Please enter your choice: ", 1, 6);

    switch (choice) {
        case 1:
            cout << "Your gross salary is: " << gross_salary << endl;
            break;
        case 2:
            cout << "Your bonus is: " << bonus << endl;
            break;
        case 3:
            cout << "Your tax is: " << tax;
            if (isLaborer) cout << " (not applicable to laborers)";
            cout << endl;
            break;
        case 4:
            cout << "Your pension is: " << pension;
            if (isLaborer) cout << " (not applicable to laborers)";
            cout << endl;
            break;
        case 5:
            cout << "Your net salary is: " << net_salary << endl;
            break;
        case 6:
            cout << "Your gross salary is: " << gross_salary << endl;
            cout << "Your bonus is: " << bonus << endl;
            if (!isLaborer) {
                cout << "Your overtime pay is: " << overtime_pay << endl;
            } else {
                cout << "Your machinery damage penalty is: " << penalty << endl;
            }
            cout << "Your tax is: " << tax;
            if (isLaborer) cout << " (not applicable to laborers)";
            cout << endl;
            cout << "Your pension is: " << pension;
            if (isLaborer) cout << " (not applicable to laborers)";
            cout << endl;
            cout << "Your net salary is: " << net_salary << endl;
            break;
    }
    return 0;
}
