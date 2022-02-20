#include <iostream>
using namespace std;

int main() {

    //define an array of integers
    int numbers[5];
    for (int& val : numbers) {
        cout << "Enter an integer value and press ENTER: ";
        cin >> val;
    }

    //display the values in the array
    cout << "\nHere are the values you entered: \n";
    for (int val : numbers) {
        cout << val << endl;
    }

    return 0;

}