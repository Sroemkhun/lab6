#include <iostream>
using namespace std;

int main() {
    
    int even_count = 0;
    int odd_count = 0;
    int number;

    
    do {
        
        cout << "Enter an integer: ";
        
        cin >> number;

        if (number == 0) {
            break; 
        }

        
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

    } while (true); 


    cout << "#Even numbers = " << even_count << endl;
    cout << "#Odd numbers = " << odd_count << endl;

    return 0;
}