/* Name - Mayank Yadav
   PRN - 24070123060
   Class - ENTC A-3 */
#include <iostream>
using namespace std;

int main(){
    double code;
    cout << "Enter the private code:";
    cin >> code;
    try{
        if(code!=9762){
            throw code;
        }
        else{
            cout << "Access Granted" << endl;
        }
    }
    catch(double wrongCode){
        cout << "\nERROR: Entered wrong code"<<endl;
    }
    return 0;
}



/* output:
Enter the private code:9762
Access Granted */
