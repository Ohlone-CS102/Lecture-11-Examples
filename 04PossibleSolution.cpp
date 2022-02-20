//This program uses two parallel arrays
//one for hours worked
//and another for pay rate

#include <iostream>
#include <iomanip>

void getHoursAndPayRate( double hours[], double payRate[]);
//Precondition: hours[] and payRate[] are 1D arrays of size NUM_EMPLOYEES
//Postcondition: prompts user for hours and pay data for each of the NUM_EMPLOYEES
//inputs data for employee i to index i of hours[] and index i of payRate[]

void displayGrossPay(double hours[], double payRate[]);
//Precondition: hours[] and payRate[] are 1D arrays of size NUM_EMPLOYEES
//hours and payRate are initialized fully
//Postcondition: multiplies hours and payRate to determine gross pay for each
//employee.  Outputs employee gross pay data to screen.

const int NUM_EMPLOYEES = 5;    //number of employees

using namespace std;

int main()
{

    double hours[NUM_EMPLOYEES];       // holds hours worked
    double payRate[NUM_EMPLOYEES];   //holds pay rate
    
//call getHoursAndPayRate
getHoursAndPayRate(hours, payRate);

//Display each employee's gross pay
//call displayGrossPay

displayGrossPay(hours, payRate);


    return 0;
}


void getHoursAndPayRate( double hours[], double payRate[])
{
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
         << " employees and their \n"
         << "hourly pay rates.\n";

    cout << endl;

    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];

        cout << endl;
    }
}

void displayGrossPay(double hours[], double payRate[])
{
    cout << "Here is the gross pay for each employee: \n";
    cout << fixed << showpoint << setprecision(2);

    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
}