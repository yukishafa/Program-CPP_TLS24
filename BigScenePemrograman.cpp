#include <iostream>  // For input/output operations
#include <cmath>     // For mathematical operations

using namespace std;

int main() {
    double num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << num << " is positive." << endl;
        cout << "Square root of " << num << " is " << sqrt(num) << endl; 
    } else if (num < 0) {
        cout << num << " is negative." << endl;
        cout << "Absolute value of " << num << " is " << fabs(num) << endl;
    } else {
        cout << "You entered zero." << endl;
    }
    
    return 0;
}
