/*
✍️IMPUT 
    💭ASSIGNMENT (from 0 100 )
    💭MID TERM (from 0 to 100 )
    💭FINAL EXAM (from 0 100)

✍️OUTPUT
    💭TOTAL MARKS (out of 100 from 100 with one decimal point )
    💭PASS or FAIL (depending on the value that student got )

✍️PROCESS 
    💭Define for all inputs like assingment, mid exam, the final exam and the total mark.
    💭Read the assingment ,mid exam and the final exam.
    💭Calculate:
                👉20% of the value of the total assignment.(by: assignment =assignment value *0.20)
                👉30% of the value of the mid exam.(by: mid exam = mid exam*0.30)
                👉50% of the value of the final exam.(by: final exam =final exam *0.50)
    💭Add the three weighted marks to get the course total which is out of 100.
    💭Use the conditional operator to check whether the total is greater than or equal to 50.
                                👉If true, the result is Pass.
                                👉If false, the result is Fail.
    💭Display the total with one decimal place and display the result.

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    double assignment, midterm, finalExam;
    double total;

    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    cout << "Enter your assignment mark: ";
    cin >> assignment;

    cout << "Enter your midterm mark: ";
    cin >> midterm;

    cout << "Enter your final exam mark: ";
    cin >> finalExam;

    total = (assignment * ASSIGNMENT_WEIGHT)
          + (midterm * MIDTERM_WEIGHT)
          + (finalExam * FINAL_WEIGHT);

    string result = (total >= PASS_MARK) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);

    cout << "Course Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;

}

