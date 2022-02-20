#include <iostream>
using namespace std;

int main() {
     //define an array of integers
    int numbers[] = { 10, 20, 30, 40, 50 };

    //display the values in the array
    for (int val : numbers) {
        cout << val << endl;
    }

    return 0;

}