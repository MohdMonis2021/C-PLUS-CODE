#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int sum = 0;

    do {
        sum += num;

        // take input from the user
        cout << "Enter a number: ";
        cin >> num;
    }
    while (num >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}
