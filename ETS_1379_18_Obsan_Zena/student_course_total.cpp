/*
A. Input and Output

Input:
1. Assignment mark out of 100 (assignment).
2. Midterm mark out of 100 (midterm).
3. Final exam mark out of 100 (final).

Output:
1. Total weighted mark (total).
2. Pass or fail status based on the total mark.

B. Process
1. Declare assignment, midterm, final, and total as double variables.
2. Accept the assignment mark from the user.
3. Accept the midterm mark from the user.
4. Accept the final exam mark from the user.
5. Calculate the total weighted mark by:
   - Multiplying the assignment mark by 0.2 (20%).
   - Multiplying the midterm mark by 0.3 (30%).
   - Multiplying the final exam mark by 0.5 (50%).
   - Adding the three results together.
6. Set the output precision to one decimal place.
7. Display the total weighted mark.
8. Check whether the total mark is greater than or equal to 50.
9. If the total mark is greater than or equal to 50, display "You have passed".
10. Otherwise, display "You have failed".
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double assignment, midterm, final, total;
    cout<<"enter assignment out of 100%: ";
    cin>>assignment;
    cout<<"enter midterm out of 100%: "; 
    cin>>midterm;
    cout<<"enter final out of 100%: ";
    cin>>final;
    total=(assignment*0.2)+(midterm*0.3)+(final*0.5);
    cout<<fixed<<setprecision(1);
    cout<<"your total mark is: "<<total<<endl;
    total>=50?cout<<" you have passed":cout<<"you have failed";
    return 0;
}