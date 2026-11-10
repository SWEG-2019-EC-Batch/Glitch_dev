/*
(a) Inputs and Outputs
Inputs:
- Assignment mark (out of 100).
- Midterm mark (out of 100).
- Final exam mark (out of 100).
Outputs:
- Course total (one decimal place).
- Pass or Fail.
(b) Process (Numbered List)
1. Start the program.
2. Declare three variables to store the assignment, midterm and final marks.
3. Declare a variable to store the course total.
4. Read the three marks from the user.
5. Calculate the weighted course total:
   - Assignment contributes 20%.
   - Midterm contributes 30%.
   - Final exam contributes 50%.
6. Use the conditional operator to determine whether the student passes or fails. If the total is 50 or above, display Pass; otherwise, display Fail.
7. Display the course total to one decimal place and the result.
8. End the program.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main () {   
    double mid,assignment,final,total;
    cout << " Enter midterm score out of 100  ";  
    cin >> mid; 
    cout << " enter assignment score out of 100 ";
    cin >> assignment;
    cout << " enter final score out of 100 ";
    cin >> final;
    total = (mid * 0.3) + (assignment * 0.2) + (final * 0.5);
    cout << " your total score is " << fixed << setprecision(2) << total << endl;
      total < 50 ? cout << " fail " << endl : cout << " pass " << endl;
    return 0;
}