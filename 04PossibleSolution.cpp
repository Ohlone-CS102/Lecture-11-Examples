//This program uses two parallel arrays
//one for hours worked
//and another for pay rate

#include <iostream>
#include <iomanip>

void getHoursAndPayRate( double hours[], double payRate[]);
void displayGrossPay(const double hours[], const double payRate[]);

const int NUM_EMPLOYEES = 5;    //number of employees

using namespace std;

int main() {

    double hours[NUM_EMPLOYEES];       // holds hours worked
    double payRate[NUM_EMPLOYEES];   //holds pay rate
    
    //call getHoursAndPayRate
    getHoursAndPayRate(hours, payRate);

    //Display each employee's gross pay
    //call displayGrossPay

    displayGrossPay(hours, payRate);


    return 0;
}

/**
 * Collects the hours and payrate for employees
 * @param hours Array reference for storing the number of hours worked for each employee
 * @param payRate Array reference for storing the payrate for each employee
 * @see Precondition: NUM_EMPLOYEES must be initialized to the size of the array
 */
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


/**
 * Outputs the gross pay to
 * @param hours array holding the number of hours worked
 * @param payRate array holding the payRate for each employee
 * @see Precondition: NUM_EMPLOYEES must be initialized to the size of the array
 */
void displayGrossPay(const double hours[], const double payRate[])
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