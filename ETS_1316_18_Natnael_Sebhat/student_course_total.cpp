    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main(){
        double ass, mid, finalExam;
        const double pass_mark = 50 ;

        
        
        
        cout << "Enter your assignment result: ";
        cin >> ass;
        cout << "Enter your mid  exam results: ";
        cin >> mid;
        cout << "Enter your final exam results: ";
        cin >> finalExam;
        
        double total = (ass * 0.20) + (mid*0.30) + (finalExam*0.50) ;
    
        string res = total >= pass_mark ? "Pass" : "Fail" ;
        

        cout << fixed << setprecision(1) << "The total result out of 100 is " << total << endl;
        cout << "........................................" << endl;
        cout << "Result: " << res << endl ;


        return 0;
        
    }