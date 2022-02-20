#include <iostream>

using namespace std;

int main() {
    const int MAX_ROWS = 5;
    const int MAX_COLS = 4;

    int myGrid[MAX_ROWS][MAX_COLS];   //2D array to hold numbers
    cout << "Welcome to Prof. Erickson's Multidimensional Array Sandbox."
         << endl << "This sandbox is for practicing two dimensional arrays" << endl;

    cout << "Let's create some ASCII art and numbered grids to practice 2D arrays: " << endl;

    cout << "First, let's initialize our array and make a grid of zeroes: " << endl;

    //initialize all elements to zero
    for (int row = 0; row < MAX_ROWS; row++) {
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = 0;  //initialize each element to zero

        }
    }

    //output all elements to screen, separated by a space.
    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            cout << myGrid[row][col] << "\t";
        }
        cout << endl; //make a space for next row.
    }
    cout << endl << "Now let's update our array so that each is numbered from 0 to "
         << (MAX_ROWS * MAX_COLS - 1) << endl;

    int number = 0;  //variable to keep track as we number each element

    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = number;  //number each element
            cout << myGrid[row][col] << "\t";  //output to screen
            number++;  //increment number

        }
        cout << endl; //make a space for next row.
    }

    cout << endl << "Let's do the same thing but in reverse... " << endl;

    number = (MAX_ROWS * MAX_COLS) - 1;  //set number to highest value and count down

    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = number;  //number each element
            cout << myGrid[row][col] << "\t";  //output to screen
            number--;  //increment number

        }
        cout << endl; //make a space for next row.
    }


    cout << endl << "Let's get fancy and add a border of zeroes in the perimeter." << endl;

    number = (MAX_ROWS * MAX_COLS) - 1;  //set number to highest value and count down


    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {

            if (row == MAX_ROWS - 1 || row == 0 || col == MAX_COLS - 1 || col == 0) {
                myGrid[row][col] = 0;  //if we are in a border element, set equal to zero
                cout << myGrid[row][col] << "\t";  //output to screen
            } else {
            myGrid[row][col] = number;  //number each element
            cout << myGrid[row][col] << "\t";  //output to screen
             }
            number--;  //increment number

        }
        cout << endl; //make a space for next row.
    }

    return 0;
}

