    
    
    
    
    
    /*
       #Inputs
         - Assignment mark (0 to 100)
         -  Midterm mark (0 to 100)
         -  Final exam mark (0 to 100)

        #Outputs
         - Course total out of 100, shown with one decimal place
         - Result: Pass or Fail

        #Process
          1, Define constants: assignment weight 0.20, midterm weight 0.30, final weight 0.50, pass mark 50.
          2, Read the assignment, midterm and final marks from the user.
          3, Compute total = (assignment × 0.20) + (midterm × 0.30) + (final × 0.50).
          4, Use the conditional operator to set the result: if total >= 50, “Pass”, otherwise “Fail”.
          5, Display the total with one decimal place (using fixed and setprecision(1)).
          6, Display the result (Pass or Fail). 


          #Program Desing

           1, Start
           2,  Declare three double variables: ass, mid, finalExam
           3, Declare the constants: ASS_W = 0.20, MID_W = 0.30, FINAL_W = 0.50
           4, Declare the constant pass_mark = 50
           5, Display “Enter your assignment result: “
           6, Read the assignment mark into ass
           7,  Display “Enter your mid exam results: “
           8,  Read the midterm mark into mid
           9, Display “Enter your final exam results: “
           10, Read the final exam mark into finalExam
           11, Declare a double variable total and calculate it:
           12, total = (ass × ASS_W) + (mid × MID_W) + (finalExam × FINAL_W)
            13, Declare a string variable res and use the conditional operator to set it: if total >= pass_mark, res = “Pass”; otherwise res = “Fail”
           14,  Display “The total result out of 100 is “ followed by total to one decimal place
           15, Display “Result: “ followed by res
            16, End
           
    
    
    
    
    */
    
    
    
    
    
    
    
    #include <iostream>
    #include <iomanip>
    #include <string>

    using namespace std;

    int main(){
        double ass, mid, finalExam;
        const double ASS_W = 0.20, MID_W = 0.30, FINAL_W = 0.50;
        const double pass_mark = 50 ;

        
        
        
        cout << "Enter your assignment result: ";
        cin >> ass;
        cout << "Enter your mid  exam results: ";
        cin >> mid;
        cout << "Enter your final exam results: ";
        cin >> finalExam;
        
        double total = ass * ASS_W + mid * MID_W + finalExam * FINAL_W;
    
        string res = total >= pass_mark ? "Pass" : "Fail" ;
        
        cout << "........................................" <<endl;
        cout << fixed << setprecision(1) << "The total result out of 100 is " << total << endl;
        cout << "........................................" << endl;
        cout << "Result: " << res << endl ;


        return 0;
        
    }