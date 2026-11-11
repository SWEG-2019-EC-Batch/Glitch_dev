// ============================================================
// Fundamentals of Programming I - Individual Assignment 1
// Task 1: Student course total
// (a) Inputs and outputs
//     Inputs : assignment mark, midterm mark, final mark
//              (each out of 100)
//     Outputs: course total (one decimal place) and the
//              word Pass or Fail
// (b) Process
//     1. Read the assignment mark.
//     2. Read the midterm mark.
//     3. Read the final mark.
//     4. total = 0.20 * assignment + 0.30 * midterm
//              + 0.50 * final
//     5. result = (total >= 50) ? "Pass" : "Fail"
//        (decided with the conditional operator, no if)
//     6. Print the total with one decimal place and the result.
//
// (c) Complete C++ program (below)
// ============================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double assignment, midterm, finalMark, total;

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;

    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;

    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;

    total = 0.20 * assignment + 0.30 * midterm + 0.50 * finalMark;

    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << ((total >= 50) ? "Pass" : "Fail") << endl;

    return 0;
}
