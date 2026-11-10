#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int ass, mid, final;

    
    
    
    cout << "Enter your assignment result: ";
    cin >> ass;
    cout << "Enter your mid  exam results: ";
    cin >> mid;
    cout << "Enter your final exam results: ";
    cin >> final;
    
    double total = ass + mid + final ;

    string res = total >=50 ? "Pass" : "Fail" ;
    

    cout << fixed << setprecision(1) << "The total result out of 100 is " << total << endl;
    cout << "........................................" << endl;
    cout << res ;
    
}